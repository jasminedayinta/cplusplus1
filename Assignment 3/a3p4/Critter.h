//
//  a3p4.hpp
//  a3p4
//
//  Created by Jasmine Juwono on 17.10.17.
//  Copyright © 2017 Jasmine Juwono. All rights reserved.
//
/*CH08-320142
 a3_p4.cpp Critter.h
 Jasmine Dayinta
 j.dayinta@jacobs-university.de*/

#include <stdio.h>
using namespace std;

class Critter
{
private:  // data members are private
    string name;
    int hunger;
    int boredom;
    double height, thirst;
    
    void conversion();
    
public: // business logic methods are public
    
    // constructor methods
    Critter();
    Critter(const string &name);
    Critter(const string &name, const int &hunger,
            const int &boredom, const double &height);
    Critter(const string &name, const int &hunger,
            const int &boredom, const double &height,
            const double &thirst);
    
    // setter methods
    void setName(std::string& newname);
    void setHunger(int newhunger);
    void setBoredom(int newboredom);
    void setHeight(double newheight);
    void setThirst(double newthirst);

    // getter method
    int getHunger();
    
    // service method
    void print();
};
