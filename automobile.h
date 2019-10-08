/*
    Header file for the automobileType class
*/

#ifndef AUTOMOBILE_H
#define AUTOMOBILE_H

#include <string>

class automobileType{
    public:
        void setProperties(float, float, float);
        /*
            Function takes 3 parameters to set the odemeter, fuel, and effiency.
            If any values are below 0 then they are automatically set to 0
            Post Condtion:
                odemeter = odmter
                fuel = fuelLevel
                efficieny = effo
        */
       void setOdemeter(float);
       /*
            Function that takes a paramter to indivually set the odemeter.
            If any values are are below 0 then they are automatically set to 0.
            Post Condition:
                odemeter = odmterInput
       */
        float getOdemeter();
        /*
            Function that returns the current value of odemeter 
            Post Condition:
                return odemeter 
        */
        std::string getInfoString() const;
        /*
            Function that returns a string with an update of all 3 properties.
            private members are not mutated, but have copies that are converted
            to strings. 
            Post Condition:
                "Miles = odemeter, Fuel = fuelLevel, efficieny = effo"
        */
        void drive(float);
        /*
            Function takes a parameter for amount of miles the car has driven.
            The function then calculates the new fuel level and updates the
            odemeter. 
            Post Condition:
                fuel -= gallonsUsed
                odemeter += milesTrav
        */
        automobileType();
        /*
            Default constructor for automobileType. 
            Calls the setProperties function to set all to 0
            Post Condition:
                setProperties(0,0,0)
        */
        automobileType(float, float, float);
        /*
            Constructor that takes parameters to initialize automobileType
            Post Concdtion:
                setProperties(float, float , float)
        */

    private:
        float odemeter;
        float fuel;
        float efficiency; 
};

#endif