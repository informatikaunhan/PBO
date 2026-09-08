#include "Soldier.h"
#include "Vehicle.h"
#include "Weapon.h"

#include <iostream>

int main() {
    Soldier alpha;
    alpha.serviceNumber = 771;
    alpha.rename("EAGLE-1").setReady(true);
    Soldier::setActiveRosterLimit(120);

    Vehicle carrier;
    carrier.code = "APC-21";
    carrier.operational = true;
    carrier.refuel(60.0);

    Weapon rifle;
    rifle.serial = "WPN-07";
    rifle.load(20);
    rifle.setSafeMode(false);

    alpha.print();
    carrier.print();
    rifle.print();
    std::cout << "RosterLimit=" << Soldier::activeRosterLimit
              << " | MaxTeam=" << Soldier::MaxTeamSize << '\n';

    return 0;
}
