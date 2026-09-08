#include <cassert>
struct Vehicle { int id{7}; };
struct LandVehicle : virtual Vehicle {};
struct WaterVehicle : virtual Vehicle {};
struct AmphibiousVehicle : LandVehicle, WaterVehicle {};
int main() {
    AmphibiousVehicle a;
    const Vehicle& l = static_cast<const LandVehicle&>(a);
    const Vehicle& w = static_cast<const WaterVehicle&>(a);
    assert(&l == &w);
}
