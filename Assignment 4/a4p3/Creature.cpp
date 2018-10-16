//
//  Creature.cpp
//  a4p3
//
//  Created by Jasmine Juwono on 18.10.17.
//  Copyright © 2017 Jasmine Juwono. All rights reserved.
//

/*CH08-320142
 a4_p3.cpp Creature.cpp
 Jasmine Dayinta
 j.dayinta@jacobs-university.de*/

#include "Creature.h"
#include <iostream>

using namespace std;

Creature::Creature(): distance(10)
{}

void Creature::run() const {
    cout << "running " << distance << " meters!\n";
}

Wizard::Wizard() : distFactor(3)
{}

void Wizard::hover() const {
    cout << "hovering " << (distFactor * distance) << " meters!\n";
}

Sleeping::Sleeping() : sleepinghours(10)
{}

void Sleeping::hours(){
    cout << "Number of sleeping hours " << (sleepinghours*distance) << endl;
}

Pace::Pace() : fastness(150)
{}

void Pace::speed(){
    cout << "He is " << fastness*distance << " fast." << endl;
}

Creature::~Creature(){
    cout << "Creature is deleted\n";
}

Wizard::~Wizard(){
    cout << "Wizard is deleted\n";
}
Sleeping::~Sleeping(){
    cout << "Sleeping is deleted\n" << endl;
}
Pace::~Pace(){
    cout << "Pace is deleted\n" << endl;
}
