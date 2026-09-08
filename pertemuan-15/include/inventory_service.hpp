#pragma once
#include "audit_log.hpp"
#include "catalog.hpp"
#include "report_policy.hpp"
#include "weapon_record.hpp"
#include <sstream>
#include <string>
#include <utility>

class InventoryService {
    Catalog<WeaponRecord> catalog_;
    AuditLog audit_;
public:
    void registerItem(WeaponRecord item) {
        const std::string id = item.id();
        catalog_.add(std::move(item));
        audit_.log("REGISTER " + id);
    }
    void issueItem(const std::string& id, const std::string& unit) {
        auto* item = catalog_.findById(id);
        if (!item) throw ItemNotFound(id);
        item->issueTo(unit);
        audit_.log("ISSUE " + id + " -> " + unit);
    }
    void returnItem(const std::string& id) {
        auto* item = catalog_.findById(id);
        if (!item) throw ItemNotFound(id);
        item->returnToStore();
        audit_.log("RETURN " + id);
    }
    const WeaponRecord& get(const std::string& id) const {
        auto* item = catalog_.findById(id);
        if (!item) throw ItemNotFound(id);
        return *item;
    }
    std::string generateReport(const ReportPolicy& policy) const {
        std::ostringstream out;
        for (const auto& item : catalog_.items()) out << policy.format(item) << '\n';
        return out.str();
    }
    std::size_t availableCount() const {
        return catalog_.countIf([](const WeaponRecord& x){ return x.available(); });
    }
    std::size_t size() const noexcept { return catalog_.size(); }
    const AuditLog& audit() const noexcept { return audit_; }
};
