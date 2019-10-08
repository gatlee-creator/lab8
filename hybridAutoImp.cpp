#include "hybridAuto.h" 

hybridAutoType::setChargeLevel(float chargeInput){
    bauCharge = chargeInput; 
}

hybridAutoType::getChargeLevel(){
    return bauCharge; 
}

hybridAutoType::setChargeEfficiency(float effoInput){
    bauEfficieny = effoInput; 
}

hybridAutoType::getChargeEfficieny(){
    if(engineMode=ELECTRIC){
        return bauEfficieny; 
    } else {
        return; 
    }
}