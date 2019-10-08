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
    int pos; 

    //modify string length to 2 decimal places
    pos = chargeToString.find_first_of(".");
    chargeToString = chargeToString.erase(pos + 3, chargeToString.length());

    pos = effoToString.find_first_of(".");
    effoToString = effoToString.erase(pos + 3, effoToString.length());
    

    string hybridStatus = " Charge = " + chargeToString +
                          " Charge efficiency = " + effoToString; 
    
    return autoMobileStatus + hybridStatus; 
}

hybridAutoType::hybridAutoType(){
    bauCharge = DEFAULT_CHARGE_LEVEL; 
    bauEfficieny = DEFAULT_EFFICIENCY; 
    engineMode = ELECTRIC; 

}

hybridAutoType::hybridAutoType(float chargeInput, float chargeEffoInput, float odmtrInput, float fuelInput, float autoEffoInput) 
                : automobileType(odmtrInput, fuelInput, autoEffoInput)
{
        //body of constructor 
        bauCharge = chargeInput;
        bauEfficieny = chargeEffoInput; 
        engineMode = ELECTRIC; 
}
