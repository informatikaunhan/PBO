#ifndef PBO301_SOLDIER_H
#define PBO301_SOLDIER_H

#include <string>

class Soldier {
public:
    std::string callSign{"UNASSIGNED"};
    int serviceNumber{0};
    bool ready{false};

    static int activeRosterLimit;
    static constexpr int MaxTeamSize = 12;

    Soldier& rename(const std::string& callSign);
    Soldier& setReady(bool ready);
    bool isReady() const { return ready; }
    void print() const;

    static void setActiveRosterLimit(int limit);
};

#endif // PBO301_SOLDIER_H
