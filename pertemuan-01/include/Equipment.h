#pragma once
#include <string>

class Equipment {
public:
    Equipment(int id, std::string name, bool ready);
    void display() const;

    int id() const noexcept { return id_; }
    const std::string& name() const noexcept { return name_; }
    bool isReady() const noexcept { return ready_; }

private:
    int id_;
    std::string name_;
    bool ready_;
};
