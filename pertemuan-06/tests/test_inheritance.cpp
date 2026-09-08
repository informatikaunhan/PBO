#include "MilitaryUnit.h"
#include "AmphibiousVehicle.h"
#include <cassert>
int main() {
    InfantryUnit inf{"I", 95, 7, 30};
    assert(inf.id() == "I");
    assert(inf.readiness() == 95);
    assert(inf.mobility() == 7);
    assert(inf.soldiers() == 30);
    AmphibiousVehicle av{"A"};
    const Vehicle& viaLand = static_cast<const LandVehicle&>(av);
    const Vehicle& viaWater = static_cast<const WaterVehicle&>(av);
    assert(&viaLand == &viaWater); // satu virtual base Vehicle
    assert(viaLand.callsign() == "A");
    return 0;
}
