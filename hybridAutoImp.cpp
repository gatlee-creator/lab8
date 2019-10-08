#include "hybridAuto.h" 

void hybridAutoType::setChargeLevel(float chargeInput){
    bauCharge = chargeInput; 
}

float hybridAutoType::getChargeLevel(){
    return bauCharge; 
}

void hybridAutoType::setChargeEfficiency(float effoInput){
    bauEfficieny = effoInput; 
}

float hybridAutoType::getChargeEfficieny(){
    if(engineMode==ELECTRIC){
        return bauEfficieny; 
    } else {
        return -1; 
    }
}