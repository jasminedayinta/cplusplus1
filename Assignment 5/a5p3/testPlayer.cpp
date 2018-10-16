//
//  main.cpp
//  a5p3
//
//  Created by Jasmine Juwono on 24.10.17.
//  Copyright © 2017 Jasmine Juwono. All rights reserved.
//

/*CH08-320142
 a5_p3.cpp testPlayer.cpp
 Jasmine Dayinta
 j.dayinta@jacobs-university.de*/

#include <iostream>
#include "TournamentMember.h"

int main() {
    
    //this is the first constructor
    Player p1;
    
    //setting properties for the first player
    p1.setNationality("German");
    p1.setNumber(1);
    p1.setPosition("Goal Keeper");
    p1.setFoot(true);
    char firstName[] = "Manuel";
    char lastName[] = "Neuer";
    char dateOfBirth[] = "1986-03-27";
    
    //instance of the class
    Player p2(2, "Forward", 5, false, firstName, lastName, dateOfBirth, "German", "Male");
    
    //instance of the class with the copy constructor
    Player p3(p2);
    
    p1.print();
    p2.print();
    p3.print();
    
    TournamentMember::locationChange("Tokyo");

    p1.inGoals();
    p2.inGoals();
    p3.inGoals();
    
    p1.print();
    p2.print();
    p3.print();

    return 0;
}
