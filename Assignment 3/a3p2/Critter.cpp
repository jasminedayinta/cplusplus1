//
//  a3p2.cpp
//  a3p2
//
//  Created by Jasmine Juwono on 17.10.17.
//  Copyright © 2017 Jasmine Juwono. All rights reserved.
//

/*CH08-320142
 a3_p2.cpp Critter.cpp
 Jasmine Dayinta
 j.dayinta@jacobs-university.de*/

#include <iostream>
#include "Critter.h"

using namespace std;

//setter methods
void Critter::setName(string& newname) {
    name = newname;
}

void Critter::setHunger(int newhunger) {
    hunger = newhunger;
}

void Critter::print() {
    cout << "I am " << name << ". My hunger level is " << hunger << "." << endl;
}

void Critter::setBoredom(int newboredom){
    this->boredom = boredom;
}

void Critter::setHeight(double newheight){
    this->height = height;
}

//getter methods
int Critter::getHunger() {
    return hunger;
}

//defining the constructors
Critter::Critter(){
    name = "Critter";
    height = 10.0;
    boredom = 0;
    hunger = 0;
    cout << "First object: \n" << endl;
    cout << "Name: " << this->name << endl;
    cout << "Height: " << height << endl;
    cout << "Hunger: " << hunger << endl;
    cout << "Boredom: " << boredom << endl;
}

Critter::Critter(const string &name){
    this->name = name;
    height = 10.0;
    boredom = 0;
    hunger = 0;
    cout << "New object created: \n" << endl;
    cout << "Name: " << this->name << endl;
    cout << "Height: " << height << endl;
    cout << "Hunger: " << hunger << endl;
    cout << "Boredom: " << boredom << endl;
}

Critter::Critter(const string &name, const int &hunger, const int &boredom,
                 const double &height){
    this->name = name;
    this->height = 10.0;
    this->hunger = hunger;
    this->boredom = boredom;
    cout << "Third new object: \n" << endl;
    cout << "Name: " << this->name << endl;
    cout << "Height: " << height << endl;
    cout << "Hunger: " << hunger << endl;
    cout << "Boredom: " << boredom << endl;
}
