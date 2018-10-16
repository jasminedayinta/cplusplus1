//
//  a3p2.hpp
//  a3p2
//
//  Created by Jasmine Juwono on 17.10.17.
//  Copyright © 2017 Jasmine Juwono. All rights reserved.
//

/*CH08-320142
 a3_p2.cpp Critter.h
 Jasmine Dayinta
 j.dayinta@jacobs-university.de*/

#ifndef a3p2_h
#define a3p2_h

#include <stdio.h>
using namespace std;

class Critter
{
private:  // data members are private
    string name;
    int hunger;
    int boredom;
    double height;
    
public: // business logic methods are public
    
    // constructor methods
    Critter();
    Critter(const string &name);
    Critter(const string &name, const int &hunger,
            const int &boredom, const double &height);
    
    // setter methods
    void setName(std::string& newname);
    void setHunger(int newhunger);
    void setBoredom(int newboredom);
    void setHeight(double newheight);
    
    // getter method
    int getHunger();
    
    // service method
    void print();
};

#endif
