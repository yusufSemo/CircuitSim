//working on circuit simulation software
//test compile g++ -std=c++17 main.cpp -o sim


#include <iostream>
#include "../include/Component.h"
#include "../include/Resistor.h"
#include "../include/ComponentFactory.h"


int main() {
    Resistor r1(3,{1,2}, 150);
    std::cout << "the resistance is "<<r1.getR() << std::endl;
    std::cout << "the id is "<<r1.getID() << std::endl;
    std::cout << "terminal 0 is" << r1.getTerminal(0) << std::endl;
    std::cout << "terminal 1 is " << r1.getTerminal(1) << std::endl;
    //Circuit
    
    

    return 0;
}
