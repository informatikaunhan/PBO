#ifndef PBO301_WEAPON_H
#define PBO301_WEAPON_H

#include <string>

class Weapon {
public:
    std::string serial{"W-000"};
    int rounds{0};
    bool safeMode{true};

    static constexpr int Capacity = 30;

    void load(int amount);
    void setSafeMode(bool safe);
    bool canFire() const;
    void print() const;
};

#endif // PBO301_WEAPON_H
