//
//  main.cpp
//  testcritter
//
//  Created by Jasmine Juwono on 10.10.17.
//  Copyright © 2017 Jasmine Juwono. All rights reserved.
//

/*CH08-320142
 a2_p6.cpp testcritter
 Jasmine Dayinta
 j.dayinta@jacobs-university.de*/

#include <iostream>
#include <cstdlib>
#include "Critter.h"

int main(int argc, char** argv)
{
    Critter c;
    
    string name;
    int hunger;
    
    cout << endl << "Please enter data: " << endl;
    cout << "Name: ";
    // cin >> name; will not work if name contains
    // spaces
    getline(cin, name);
    c.setName(name);
    c.setName(name);
    cout << "Hunger: ";
    cin >> hunger;
    c.setHunger(hunger);
    
    cout << "You have created:" << endl;
    c.print();
    return 0;
}
}
