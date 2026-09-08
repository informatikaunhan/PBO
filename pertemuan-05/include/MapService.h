#pragma once

class MapService {
public:
    int routeCode(int x, int y) const noexcept { return x + y; }
};

class Commander {
public:
    int planRoute(const MapService& maps) const noexcept {
        return maps.routeCode(8, 6); // transient association
    }
};
