//Circuit.h
#ifndef CIRCUIT_H
#define CIRCUIT_H
#include "Component.h"
#include <memory>
#include <utility>

class Circuit{
    private:
        std::vector<std::unique_ptr<Component>> components;
    public:
        //add component
        void addComponent(std::unique_ptr<Component> comp);
        void listComponents() const;
        void stampAll();
};
#endif