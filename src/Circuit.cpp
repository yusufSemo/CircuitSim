//Circuit
#include "Circuit.h"

void Circuit::addComponent(std::unique_ptr<Component> comp){
    components.push_back(std::move(comp));
}
void Circuit::listComponents() const {
    for(const auto& comp : components){
        std::cout << "component ID " << comp->getID() << " ,Type " << comp->getType() << std::endl;
    }
}
void Circuit::stampAll(){}