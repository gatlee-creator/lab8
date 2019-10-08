#include "automobile.h"

class hybridAutoType : public automobileType {
    public:
        static const bool GAS = false;
        static const bool ELECTRIC = true; 

    private:
        float bauCharge;
        float bauEfficieny; 
        bool engineMode; 

}; 