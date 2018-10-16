//
//  main.cpp
//  a3p1
//
//  Created by Jasmine Juwono on 12.10.17.
//  Copyright © 2017 Jasmine Juwono. All rights reserved.
//

/*CH08-320142
 a3_p1.cpp testcity.cpp
 Jasmine Dayinta
 j.dayinta@jacobs-university.de*/

#include <iostream>
#include <cstdlib>
#include "City.h"


int main() {
    //declaring the instances
    City bre, ham, ber;
    
    //setting the instances to the different class definitions
    bre.setName("Bremen");
    bre.setCitizens(551767);
    bre.setLocation("Germany");
    bre.setPOI("Beck's Factory");
    
    ham.setName("Hamburg");
    ham.setCitizens(1763000);
    ham.setLocation("Germany");
    ham.setPOI("Port of Hamburg");
    
    ber.setName("Bremen");
    ber.setCitizens(3470000);
    ber.setLocation("Germany");
    ber.setPOI("Brandenburg Gate");
    
    //printing the results
    cout << "The city is: " << bre.getName() << ". It has " << bre.getCitizens() <<
    " citizens. It is located in " << bre.getLocation() <<
    ". Lastly, the point of interest is " << bre.getPOI() << ". \n" << endl;
    
    cout << "The city is: " << ham.getName() << ". It has " << ham.getCitizens() <<
    " citizens. It is located in " << ham.getLocation() <<
    ". Lastly, the point of interest is " << ham.getPOI() << ". \n" << endl;
    
    cout << "The city is: " << ber.getName() << ". It has " << ber.getCitizens() <<
    " citizens. It is located in " << ber.getLocation() <<
    ". Lastly, the point of interest is " << ber.getPOI() << ". \n" << endl;
 }
