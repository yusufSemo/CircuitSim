//Component.h,
//parent class that holds all the compnents we will use, like resistor, voltage Source,etc.
#ifndef COMPONENT_H
#define COMPONENT_H

#include <vector>
#include <initializer_list>
#include <iostream>
class Circuit;  // Forward declaration
class Component{
    protected:
        std::vector<int> terminals; //conneted nodes
        int id; // for debugging
    public:
    // Supports: Component(1, {1, 2})
    Component(int id_, std::initializer_list<int> nodeList)
        : id(id_), terminals(nodeList) {}

    // Supports: Component(1, std::vector<int>{1, 2})
    Component(int id_, const std::vector<int>& nodeVec)
        : id(id_), terminals(nodeVec) {}

    virtual ~Component() = default;

    // Access terminals
    int getTerminal(size_t i) const { 
        return terminals[i];
    }
    size_t numTerminals() const {
        return terminals.size();
    }
    int getID() const {
        return id;
    }

    // Every component must implement this to modify the matrix
    virtual void stamp(Circuit& circuit) = 0;
};


#endif

