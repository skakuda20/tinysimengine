#include "World.hpp"

void World::update() {
    for (const auto& entity : entities) {
        entity->update();
    }
}
