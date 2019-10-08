/*
    Name: Graham Atlee
    Course: csc1720
    Location of program : ~/csc1720/Labs/lab8

    This is the header file for the hybridAutoType class. This class directly
    inherits from the automobileType class. Header guards are used to prevent
    duplicate inclusion. 
*/

#ifndef HYBRIDAUTO_H
#define HYBRIDAUTO_H

#include "automobile.h"
#include <string>

class hybridAutoType : public automobileType {
    public:
        static const bool GAS = false;
        static const bool ELECTRIC = true;
        const float DEFAULT_CHARGE_LEVEL = 20; 
        const float DEFAULT_EFFICIENCY = 15; 

        void setChargeLevel(float);
        float getChargeLevel();
        void setChargeEfficiency(float);
        float getChargeEfficieny();   
        std::string getInfoString() const;
        void drive(float);
        void switchMode(char); 
        hybridAutoType();  
        hybridAutoType(float, float, float, float, float);

    private:
        float bauCharge;
        float bauEfficieny; 
        bool engineMode; 

}; 

#endif 