#pragma once
#include <unordered_map>
#include <memory>
#include <string>
#include "Component.hpp"

class Entity {
    public:
        explicit Entity(int id);
        
        template<typename T>
        void addComponent(std::shared_ptr<T> component);

        template<typename T>
        std::shared_ptr<T> getComponent();

        int getId() const;

    private:
        int id;
        std::unordered_map<std::type_index, std::shared_ptr<Component>> components;
};