//
//  main.cpp
//  a6p2
//
//  Created by Jasmine Juwono on 24.10.17.
//  Copyright © 2017 Jasmine Juwono. All rights reserved.
//

/*CH08-320142
 a6_p2.cpp testfraction.cpp
 Jasmine Dayinta
 j.dayinta@jacobs-university.de*/

#include <iostream>
#include "fraction.h"

using namespace std;

int main(){
    
    //initializing the variables by calling the class
    Fraction a, b, c;
    cout << "Enter integers" << endl;
    cin >> a >> b >> c;
    
    //prints all the information, including the calculations
    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
    
    return 0;
}
