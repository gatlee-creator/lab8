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