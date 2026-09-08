#include "../include/Interfaces.h"
#include <string>
class MissionReport final : public ISerializable, public ILoggable {
public:
    explicit MissionReport(std::string id) : id_(std::move(id)) {}
    std::string serialize() const override { return "mission=" + id_; }
    std::string logLine() const override { return "mission-report:" + id_; }
private:
    std::string id_;
};
