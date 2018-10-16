//
//  main.cpp
//  Critterh
//
//  Created by Jasmine Juwono on 10.10.17.
//  Copyright © 2017 Jasmine Juwono. All rights reserved.
//

 /*CH08-320142
 a2_p6.cpp Critter.h
 Jasmine Dayinta
 j.dayinta@jacobs-university.de*/

#include <string> // defines standard C++ string class
#include <iostream>

 /* First C++ class */
class Critter
{
private:  // data members are private
    std::string name;
    int hunger;
    int boredom;
    double height;
    
public: // business logic methods are public
    // setter methods
    void setName(std::string& newname);
    void setHunger(int newhunger);
    void setBoredom(int newboredom);
    // getter method
    int getHunger();
    // service method
    void print();
};
