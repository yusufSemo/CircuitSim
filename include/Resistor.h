//resistor
#ifndef RESISTOR_H
#define RESISTOR_H
#include "Component.h"
class Resistor : public Component {
    private:
        double resistance;
    public:
        Resistor(int id_, std::initializer_list<int> nodes, double r)
            :Component(id_, nodes), resistance(r){std::cout << "resistor created"<<std::endl;}
        double getR(){
            return resistance;
        }
        void stamp(Circuit& circuit){}
    
        std::string getType() const{
            return "Resistor";
        }

};

#endif