//
//  main.cpp
//  testcritter
//
//  Created by Jasmine Juwono on 11.10.17.
//  Copyright © 2017 Jasmine Juwono. All rights reserved.
//

/*CH08-320142
 a2_p7.cpp testcritter
 Jasmine Dayinta
 j.dayinta@jacobs-university.de*/

#include <iostream>
#include <cstdlib>
#include "Critter.h"

using namespace std;

int main(int argc, char** argv)
{
    Critter c;
    
    string name, gender; //declaring gender
    int hunger, age; //declaring age
    
    cout << endl << "Please enter data: " << endl;
    cout << "Name: ";
    cin >> name; //will not work if name contains
    // spaces
    getline(cin, name);
    c.setName(name);
    c.setName(name);
    
    cout << "Hunger: ";
    cin >> hunger;
    c.setHunger(hunger);
    
    //implementing the expansion
    cout << endl << "Please enter age: " << endl;
    cin >> age;
    c.setAge(age);
    c.print();
    
    cout << endl << "Please enter gender: " << endl;
    cin >> gender;
    getline(cin, gender);
    c.setName(gender);
    c.setName(gender);
    c.print();
    
    cout << "You have created:" << endl;
    c.print();
    return 0;
}
