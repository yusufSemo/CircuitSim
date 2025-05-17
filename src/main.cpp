//code by Yusuf Semo, 
//working on circuit simulation software
//test compile g++ -std=c++17 main.cpp -o sim


#include <iostream>
#include "../include/Component.h"

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
    return 0;
}
