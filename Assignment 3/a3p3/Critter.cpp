//
//  a3p3.cpp
//  a3p3
//
//  Created by Jasmine Juwono on 17.10.17.
//  Copyright © 2017 Jasmine Juwono. All rights reserved.
//

/*CH08-320142
 a3_p3.cpp Critter.cpp
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
    conversion();
}

void Critter::conversion(){
    double nhunger = 10.0 * (double)hunger;
    hunger = (int)nhunger;
}
void Critter::print() {
    cout << "I am " << name << ". My hunger level is " << hunger << "."
    << "My height is " << height << ". My boredom level is " << boredom
    << "." << endl;
}

void Critter::setBoredom(int newboredom){
    this->boredom = newboredom;
}

void Critter::setHeight(double newheight){
    this->height = newheight;
}

//getter method
int Critter::getHunger() {
    return hunger;
}

//defining the constructors
Critter::Critter(){
    name = "Critter";
    height = 10.0;
    boredom = 0;
    hunger = 0;
    conversion();
    cout << "First object: \n" << endl;
    cout << "Name: " << this->name << endl;
    cout << "Height: " << height << endl;
    cout << "Hunger: " << hunger << "%" << endl;
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
    cout << "Hunger: " << hunger << "%" << endl;
    cout << "Boredom: " << boredom << endl;
}

Critter::Critter(const string &name, const int &hunger, const int &boredom,
                 const double &height){
    this->name = name;
    this->height = 10.0;
    this->hunger = hunger;
    this->boredom = boredom;
    conversion();
    cout << "Third new object: \n" << endl;
    cout << "Name: " << this->name << endl;
    cout << "Height: " << this->height << endl;
    cout << "Hunger: " << this->hunger << "%" << endl;
    cout << "Boredom: " << this->boredom << endl;
}
