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

    cout << "HYBRID 2: creating hybrid2 with 5 paramter constructor" << endl;
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

    cout << "HYBRID2: switching engine with invalid input" << endl;
    hybrid2.switchMode('J');


    //make sure to create object of automobileType and test 
    

    return 0;
}