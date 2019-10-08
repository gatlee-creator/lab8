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
        cerr << "Error: Switch engine mode to electric." << endl;
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
                          " Battery efficiency = " + effoToString; 
    
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

void hybridAutoType::switchMode(char modeInput){
    if(modeInput == 'E'){
        engineMode = ELECTRIC;
        cout << "Engine switched to electric mode" << endl;
    }
    else if(modeInput == 'G'){
        engineMode = GAS;
        cout << "Engine switched to gas mode" << endl;
    }   
    else{
        cerr << "Error: Invalid engine mode" << endl;
    } 
        
}


void hybridAutoType::drive(float milesTrav){
    float chargeUsage, tempOdmter; 
    if(engineMode == ELECTRIC){
        //cout << "Car is in electric mode" << endl;
        
        //first do checks 
        if(milesTrav < 0){
            cerr << "Error: cannot drive negative miles" << endl;
            return; 
        }
            
     
     chargeUsage = (1 / bauEfficieny) * milesTrav; 

     if((bauCharge - chargeUsage) <= 0){
          bauCharge = 0;
          cerr << "Error: Out of charge" << endl;
     }
     else{
        bauCharge -= chargeUsage; 
     }
       
    tempOdmter = getOdemeter(); 
    tempOdmter += milesTrav;
    setOdemeter(tempOdmter);

    } else{
        // cout << "car is in gas mode" << endl;
        //call drive from automobileType
        automobileType::drive(milesTrav);
    }
}