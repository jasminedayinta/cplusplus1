 //
//  main.cpp
//  a3p2
//
//  Created by Jasmine Juwono on 17.10.17.
//  Copyright © 2017 Jasmine Juwono. All rights reserved.
//

/*CH08-320142
 a3_p2.cpp testcritter.cpp
 Jasmine Dayinta
 j.dayinta@jacobs-university.de*/

#include <iostream>
#include <cstdlib>
#include "Critter.h"

using namespace std;

int main(){
    
    //setting all the values to the different constructors
    Critter c;
    
    c.setHunger(5);
    c.setHeight(15.0);
    c.setBoredom(5);
    
    Critter c2("Second Critter");
    
    c2.setHunger(5);
    c2.setHeight(16.0);
    c2.setBoredom(6);
    
    Critter c3("Third Critter");
    
    c3.setHunger(5);
    c3.setHeight(17.0);
    c3.setBoredom(7);
    
    Critter c4("Fourth Critter");
    
    c4.setHunger(5);
    c4.setHeight(18.0);
    c4.setBoredom(8);
    
    return 0;
}
