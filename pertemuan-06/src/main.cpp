#include "MilitaryUnit.h"
#include "AmphibiousVehicle.h"
#include <iostream>
int main() {
    InfantryUnit infantry{"INF-01", 92, 8, 36};
    TankUnit tank{"TNK-01", 88, 6, 4};
    infantry.deploy("ALPHA");
    infantry.deploy(15);
    std::cout << infantry.id() << " soldiers=" << infantry.soldiers() << "\n";
    std::cout << tank.id() << " tanks=" << tank.tanks() << "\n";
    AmphibiousVehicle av{"AMPH-01"};
    std::cout << av.callsign() << " land=" << av.landCapable() << " water=" << av.waterCapable() << "\n";
    return 0;
}
