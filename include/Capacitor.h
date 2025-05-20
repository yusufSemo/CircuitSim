//Capacitor
#ifndef CAPACITOR_H
#define CAPACITOR_H
#include "Component.h"
#include "initializer_list"


class Capacitor: public Component{
    private:
        double Capacitance;
    public:
        Capacitor(int id_, std::initializer_list<int> nodes, double c)
            :Component(id_, nodes), Capacitance(c){std::cout << "Capacitor created!" << std::endl;}
        double getC(){
            return Capacitance;
        }
        void stamp(Circuit& circuit){}

        std::string getType() const{
            return "Capacitor";
        }

};

#endif