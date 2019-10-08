#ifndef HYBRIDAUTO_H
#define HYBRIDAUTO_H

#include "automobile.h"
#include <string>

class hybridAutoType : public automobileType {
    public:
        static const bool GAS = false;
        static const bool ELECTRIC = true;

        void setChargeLevel(float);
        float getChargeLevel();
        void setChargeEfficiency(float);
        float getChargeEfficieny();   
        std::string getInfoString() const; 

    private:
        float bauCharge;
        float bauEfficieny; 
        bool engineMode; 

}; 

#endif 