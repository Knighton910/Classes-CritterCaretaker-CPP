//
//  main.cpp
//  Classes-CritterCaretaker-Cpp
//
//  Created by Kelvin Knighton on 6/14/16.
//  Copyright © 2016 Kelvin Knighton. All rights reserved.
//

#include <iostream>
using namespace std;



class Critter {         // class definition - defines a new type, Critter

public:

    int m_Hunger;     // data member
    void Greet();     // member function prototype
    void Dance();     // member function prototype
};

void Critter::Greet() {  // member function definition
    cout << "Hi. I'm a critter. My hunger level is " << m_Hunger << ".\n";
}
void Critter::Dance() {
    cout << "Hi. I can dance merengue & some salsa \n\n ";
}


int main() {
    
    Critter crit1;
    Critter crit2;
    
    crit1.m_Hunger = 9;
    cout << "crit1's hunger level is " << crit1.m_Hunger << ".\n";
    
    crit2.m_Hunger = 3;
    cout << "crit2's hunger level is " << crit2.m_Hunger << ".\n\n";
    
    crit1.Greet();
    crit2.Greet();
    crit2.Dance();
    
    return 0;
}
