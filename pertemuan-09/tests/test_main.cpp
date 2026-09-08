#include "MilitaryAsset.h"
#include <cassert>
#include <type_traits>

int main() {
    static_assert(std::is_abstract_v<MilitaryAsset>);
    static_assert(!std::is_abstract_v<DroneAsset>);
    static_assert(!std::is_abstract_v<VehicleAsset>);
    DroneAsset d{"D", 88};
    VehicleAsset v{"V", 55};
    MilitaryAsset& a = d;
    assert(a.id() == "D");
    assert(a.readinessLevel() == 88);
    assert(v.readinessLevel() == 55);
    return 0;
}
