#include "automobile.h"

class hybridAutoType : public automobileType {
    public:
        static const bool GAS = false;
        static const bool ELECTRIC = true;

        float setChargeLevel(float);
        void getChargeLevel();
        float setChargeEfficiency(float);
        void getChargeEfficieny();   

    private:
        float bauCharge;
        float bauEfficieny; 
        bool engineMode; 

}; 