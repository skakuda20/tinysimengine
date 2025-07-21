#pragma once
#include <vector>
#include <memory>
#include "Entity.hpp"

class World {
public:
    void update();
private:
    std::vector<std::unique_ptr<Entity>> entities;
};
