#include <iostream>
#include <string>
#include "hybridAuto.h"

using namespace std; 

int main()
{

    hybridAutoType hybrid1; 
    cout << hybrid1.getInfoString() << endl; 

    hybridAutoType hybrid2(20, 14.8, 3200, 40, 30.2);
    cout << hybrid2.getInfoString() << endl;

    hybrid2.drive(22.80);
    cout << hybrid2.getInfoString() << endl;

    return 0;
}