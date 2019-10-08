#include "automobile.h"

class hybridAutoType : public automobileType {
    public:
        static const bool GAS = false;
        static const bool ELECTRIC = true;

        void setChargeLevel(float);
        float getChargeLevel();
        void setChargeEfficiency(float);
        float getChargeEfficieny();   

    private:
        float bauCharge;
        float bauEfficieny; 
        bool engineMode; 

}; 