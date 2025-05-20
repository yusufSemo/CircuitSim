//Voltage
#ifndef VOLTAGESOURCE_H
#define VOLTAGESOURCE_H

#include "Component.h"
#include <initializer_list>

class VoltageSource : public Component{
    private:
        double Voltage;
    public:
        VoltageSource(int id_, std::initializer_list<int> nodes, int v)
            :Component(id_, nodes), Voltage(v){std::cout << "Voltage Source created!" << std::endl;}
        double getV(){
            return Voltage;
        }
        void stamp(Circuit& circuit){}
    
        std::string getType() const{
            return "VoltageSource";
        }
};

#endif