
#include "ComponentFactory.h"

//create Component
std::unique_ptr<Component> ComponentFactory::create(
    const std::string& type,
    int id,
    std::initializer_list<int> nodes,
    double value
){
    if(type == "resistor" || type == "Resistor" || type == "R" ){
        return std::make_unique<Resistor>(id, nodes, value);
    }else if(type == "capacitor" || type == "Capacitor" || type == "C"){
        return std::make_unique<Capacitor>(id,nodes,value);
    }else if(type == "voltage" || type == "Voltage" || type == "V" ){
        return std::make_unique<VoltageSource>(id, nodes, value);
    }
    throw std::invalid_argument("Unknown component type: " + type);
}
