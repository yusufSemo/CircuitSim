//ComponentFactory.h
#ifndef COMPONENTFACTORY_H
#define COMPONENTFACTORY_H

#include <memory>
#include <string>
#include <initializer_list>
#include "Component.h"
#include "Resistor.h"
//Not yet implemented---
//#include "Capacitor.h"
//#include "VoltageSource.h"

class ComponentFactory{
    public:
        static std::unique_ptr<Component> create(
            const std::string& type,
            int id,
            std::initializer_list<int> nodes,
            double value
        );
};


#endif