//working on circuit simulation software
//test compile g++ -std=c++17 main.cpp -o sim


#include <iostream>
#include "../include/Component.h"
#include "../include/Resistor.h"
#include "../include/ComponentFactory.h"

// Dummy subclass just to test the base class
class TestComponent : public Component {
public:
    TestComponent(int id, std::initializer_list<int> nodes)
        : Component(id, nodes) {}

    void stamp(Circuit& circuit) override {
        // no-op
    }
};


int main() {
    TestComponent c1(1, {3, 5, 7});
    std::cout << "Component ID: " << c1.getID() << "\n";
    std::cout << "Terminals: ";
    for (size_t i = 0; i < c1.numTerminals(); ++i) {
        std::cout << c1.getTerminal(i) << " ";
    }
    std::cout << "\n";
    Resistor r1(3,{1,2}, 150);
    std::cout << "the resistance is "<<r1.getR() << std::endl;
    std::cout << "the id is "<<r1.getID() << std::endl;
    std::cout << "terminal 0 is" << r1.getTerminal(0) << std::endl;
    std::cout << "terminal 1 is " << r1.getTerminal(1) << std::endl;

    

    return 0;
}
