//
//  City.cpp
//  a3p1
//
//  Created by Jasmine Juwono on 12.10.17.
//  Copyright © 2017 Jasmine Juwono. All rights reserved.
//

/*CH08-320142
 a3_p1.cpp City.cpp
 Jasmine Dayinta
 j.dayinta@jacobs-university.de*/

#include "City.h"
#include <iostream>

using namespace std;

//setter methods
void City::setName(string newname){
    name = newname;
}

void City::setCitizens(int newcitizens){
    citizens = newcitizens;
}

void City::setLocation(string newlocation){
    location = newlocation;
}

void City::setPOI(string newpoi){
    poi = newpoi;
}

//getter methods
string City::getName(){
    return name;
}

int City::getCitizens(){
    return citizens;
}

string City::getLocation(){
    return location;
}

string City::getPOI(){
        return poi;
}
