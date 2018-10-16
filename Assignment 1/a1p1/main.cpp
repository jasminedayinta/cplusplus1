//
//  main.cpp
//  a1.p1
//
//  Created by Jasmine Juwono on 05.10.17.
//  Copyright © 2017 Jasmine Juwono. All rights reserved.
//

/*CH08-320142
 a1_p1.cpp
 Jasmine Dayinta
 j.dayinta@jacobs-university.de*/

#include <iostream>
using namespace std;

int main (int argc , char ** argv ) {
    string s; //declaring the string variable
    cout << "Enter your name: " << endl; //asking the user for input
    getline(cin, s); //taking the input using getline
    cout << s << endl; //outputting the answer
    return 0;
}
