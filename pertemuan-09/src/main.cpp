#include "MilitaryAsset.h"
#include <iostream>
#include <type_traits>
#include <vector>

void deployReadyAssets(const std::vector<MilitaryAsset*>& assets) {
    for (MilitaryAsset* asset : assets) {
        if (asset != nullptr && asset->readinessLevel() >= 70) {
            asset->deploy();
        }
    }
}

int main() {
    static_assert(std::is_abstract_v<MilitaryAsset>);
    static_assert(!std::is_abstract_v<DroneAsset>);
    DroneAsset drone{"DR-01", 85};
    VehicleAsset vehicle{"VH-07", 62};
    std::vector<MilitaryAsset*> assets{&drone, &vehicle};
    for (const MilitaryAsset* asset : assets) {
        std::cout << asset->id() << " readiness=" << asset->readinessLevel() << "\n";
    }
    deployReadyAssets(assets);
}
