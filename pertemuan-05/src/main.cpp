#include "MapService.h"
#include "Platoon.h"
#include <iostream>

int main() {
    Soldier s01{"S01", "READY"};
    Soldier s02{"S02", "READY"};
    Soldier s03{"S03", "STANDBY"};

    Squad red{"Red Squad"};
    red.add(s01);
    red.add(s02);
    Squad blue{"Blue Squad"};
    blue.add(s03);

    Platoon alpha{"Alpha Platoon"};
    alpha.addSquad(red);
    alpha.addSquad(blue);

    Commander commander;
    MapService maps;

    std::cout << alpha.name() << " | squads=" << alpha.squadCount() << '\n';
    for (const auto& squad : alpha.squads()) {
        std::cout << squad.name() << " | strength=" << squad.strength() << '\n';
    }
    std::cout << "RouteCode=" << commander.planRoute(maps) << '\n';
}
