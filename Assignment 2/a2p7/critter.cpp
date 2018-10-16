//
//  main.cpp
//  crittercpp
//
//  Created by Jasmine Juwono on 11.10.17.
//  Copyright © 2017 Jasmine Juwono. All rights reserved.
//

/*CH08-320142
 a2_p7.cpp Critter.cpp
 Jasmine Dayinta
 j.dayinta@jacobs-university.de*/

#include <iostream>
#include "Critter.h"

using namespace std;

void Critter::setName(string& newname) {
    name = newname;
}

void Critter::setHunger(int newhunger) {
    hunger = newhunger;
}

//the two expansion
void Critter::setAge(int newage) {
    age = newage;
}
void Critter::setGender(string& newgender) {
    gender = newgender;

void Critter::print() {
    cout << "I am " << name << ". My hunger level is " << hunger << "." << endl;
}

int Critter::getHunger() {
    return hunger;
}
