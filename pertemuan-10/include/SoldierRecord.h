#pragma once
#include "Interfaces.h"
#include <string>

class SoldierRecord final : public IPersistable,
                            public ISerializable,
                            public ILoggable {
public:
    SoldierRecord(std::string serviceNumber, std::string name, int readiness);
    bool save(const std::string& path) const override;
    std::string serialize() const override;
    std::string logLine() const override;
    int readiness() const noexcept { return readiness_; }
private:
    std::string serviceNumber_;
    std::string name_;
    int readiness_;
};
