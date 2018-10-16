//
//  City.hpp
//  a3p1
//
//  Created by Jasmine Juwono on 12.10.17.
//  Copyright © 2017 Jasmine Juwono. All rights reserved.
//

/*CH08-320142
 a3_p1.cpp City.h
 Jasmine Dayinta
 j.dayinta@jacobs-university.de*/

#ifndef City_h
#define City_h
#include <iostream>

using namespace std;

class City{
    
    // declaring data members that are private
    private :
    string name;
    int citizens;
    string location;
    string poi;
    
public:
    
    // setter methods
    void setName(std::string newname);
    void setCitizens(int newcitizens);
    void setLocation(std::string location);
    void setPOI(std::string newpoi);
    
    // getter method
    string getName();
    int getCitizens();
    string getLocation();
    string getPOI();
    
};
#endif
