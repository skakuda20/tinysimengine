#include "Entity.hpp"

Entity::Entity(int id) : id(id) {}

int Entity::getId() const {
    return id;
}

template <typename T>
void Entity::addComponent(std::unique_ptr<T> component) {
    components[component->getType()] = std::move(component);
}

template <typename T>
std::shared_ptr<T> Entity::getComponent() {
    std::string type = T().getType();
    if (components.count(type) > 0) {
        return std::dynamic_pointer_cast<T>(components[type]);
    }
    return nullptr;
}