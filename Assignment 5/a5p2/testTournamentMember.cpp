//
//  main.cpp
//  a5p2
//
//  Created by Jasmine Juwono on 23.10.17.
//  Copyright © 2017 Jasmine Juwono. All rights reserved.
//

/*CH08-320142
 a5_p2.cpp testtournamentmember.cpp
 Jasmine Dayinta
 j.dayinta@jacobs-university.de*/

#include <iostream>
#include "TournamentMember.h"

using namespace std;

int main() {
    
    char firstName[] = "Manuel";
    char lastName[] = "Neuer";
    char dateOfBirth[] = "1986-03-27";
    string nationality = "German";
    string gender = "Male";
    
    //setting the variables to what's written above
    TournamentMember t;
    t.setFirstName(firstName);
    t.setLastName(lastName);
    t.setDateOfBirth(dateOfBirth);
    
    //printing the information
    t.print();
    
    cout << endl;
    
    TournamentMember t1(firstName, lastName, dateOfBirth, nationality, gender);
    t1.print();
    
    cout << endl;
    
    //copy constructor being called
    TournamentMember t2(t1);
    t2.print();
    
    cout << endl;
    //changing the location of the tournament
    TournamentMember::locationChange("Rio de Janeiro");
    
    //printing all the information
    t.print();
    cout << endl;
    
    t1.print();
    cout << endl;
    
    t2.print();
    
    return 0;
}
