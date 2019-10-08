#include <iostream>
#include <string>
#include "hybridAuto.h"

using namespace std; 

int main()
{
    float temp;

    cout << "HYBRID 1: creating hybrid1 with default constructor" << endl;
    hybridAutoType hybrid1; 
    cout << hybrid1.getInfoString() << endl; 

    cout << "HYBRID 2: creating hybrid2 with 5 parameter constructor" << endl;
    hybridAutoType hybrid2(20, 14.8, 3200, 40, 30.2);
    cout << hybrid2.getInfoString() << endl;

    cout << "HYBRID 2: driving 22.8 miles on ELECTRIC engine" << endl;
    hybrid2.drive(22.80);
    cout << hybrid2.getInfoString() << endl;

    cout << "HYBRID 2: switching engine to GAS & driving 50 miles" << endl;
    hybrid2.switchMode('G');
    hybrid2.drive(50); 
    cout << hybrid2.getInfoString() << endl;

    cout << "HYBRID 2: setting electric charge back to 20" << endl;
    hybrid2.setChargeLevel(20);
    temp = hybrid2.getChargeLevel(); 
    cout << "Charge = " <<  temp << endl;

    cout << "HYBRID 2: setting electric efficiency to 28.92. " 
         << "Should get prompt to switch back to Electric mode" << endl;
    hybrid2.setChargeEfficiency(28.92);
    temp = hybrid2.getChargeEfficieny();

    cout << "HYBRID 2: switching engine with invalid input" << endl;
    hybrid2.switchMode('J');

    cout << "HYBRID 3: creating hybrid 3 and driving until out of charge" << endl;
    hybridAutoType hybrid3; 
    for(int i = 0; i < 17; i++)
        hybrid3.drive(18); 

    cout << "HYBRID 3: attempting to drive negative miles" << endl;
    hybrid3.drive(-44.52); 

    //make sure to create object of automobileType and test 
    cout << "CAR 1: creating car1 of automobileType class. " 
            "Testing all overridden functions "<< endl;
    automobileType car1(60000, 25, 13.2);

    cout << "CAR 1: calling getInfo. Should only return original version." << endl;
    cout << car1.getInfoString() << endl;
    
    cout << "CAR 1: driving 100 miles. Should call original function" << endl;
    car1.drive(100);
    cout << car1.getInfoString() << endl;

    return 0;
}