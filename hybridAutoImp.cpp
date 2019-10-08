#include "hybridAuto.h" 
#include <string>
#include <iostream>
using namespace std; 

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

string hybridAutoType::getInfoString() const {
    string autoMobileStatus = automobileType::getInfoString(); 
    string chargeToString = to_string(bauCharge); 
    string effoToString = to_string(bauEfficieny);
    string hybridStatus = " Charge = " + chargeToString +
                          " Charge efficiency = " + effoToString; 
    
    return autoMobileStatus + hybridStatus; 
}