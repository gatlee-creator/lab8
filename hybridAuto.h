/*
    Name: Graham Atlee
    Course: csc1720
    Location of program : ~/csc1720/Labs/lab8

    This is the header file for the hybridAutoType class. This class directly
    inherits from the automobileType class. Header guards are used to prevent
    duplicate inclusion. 
*/

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
        /*
            Function takes float arguement to set the battery charge level.
            Mutates the private variable bauCharge
            Post Condition:
                bauCharge = chargeInput
        */
        float getChargeLevel();
        /*
            Function returns the battery charge level. Takes no arguements.
            Accesses the private variable bauCharge. 
            Post Condition:
                return bauCharge 
        */
        void setChargeEfficiency(float);
        /*
            Function that takes a float arguement to set the charge efficiency
            Mutates the private variable bauEfficiency.
            Post Condtion: 
                bauEfficiency = effoInput
        */
        float getChargeEfficieny();   
        /*
            Function takes no arguements and returns the battery efficiency value.
            Only returns the value if the enginemode is in electric. Returns an 
            error if otherwise
            Post Condition:
                return bauEfficiency 
        */
        std::string getInfoString() const;
        /*
            Overides the getInfoString from the automobileType class. Calls
            the original function from automobileType to return info on gas 
            mode of the engine. 
            Post Condition:
                return autoMobileStatus + hybridStatus
              
        */
        void drive(float);
        /*
            Function checks if enginemode is eletric and then will compute 
            factors of miles driven. If car is in gas then it will call drive 
            function from the automobileType class.
            Post Condition:
                bauCharge -= chargeUsage
                setOdemeter(tempOdmter)
            
            Function will return error if the car battery is out of charge.
            Will retrun error if negative miles are input. 
            Post Condition:
                Error: Out of charge
                Error: cannot drive negative miles
        */
        void switchMode(char); 
        /*  
            Function takes a character arguement to switch between 1 of 2 engine modes:
            electric or gas. 
            Post Condition
                engineMode = ELECTRIC
                or
                engineMode = GAS 
            If an invalid character is passed an error is returned. 
            Post Condition:
                Error: Invalid engine mdoe
        */
        hybridAutoType();  
        /*
            Default constructor. Uses predfined default variables to 
            intitalize object. 
            Post Condition:
                bauCharge = DEFAULT_CHARGE_LEVEL
                bauEfficieny = DEFAULT_EFFICIENCY
                engineMode = ELECTRIC
        */
        hybridAutoType(float, float, float, float, float);
        /*
            Paramaterized constructor that takes a max of 5 arguements. 
            3 of the parameters are passed to the base constructor. The 
            other 2 are set inside the hybridAuto constructor. 
            Post Condition:
                bauCharge = chargeInput;
                bauEfficieny = chargeEffoInput; 
                engineMode = ELECTRIC; 
        */

    private:
        float bauCharge;
        float bauEfficiency; 
        bool engineMode; 
}; 

#endif 