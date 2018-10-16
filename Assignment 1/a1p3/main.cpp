//
//  main.cpp
//  a1p3
//
//  Created by Jasmine Juwono on 09.10.17.
//  Copyright © 2017 Jasmine Juwono. All rights reserved.
//

/*CH08-320142
 a1_p3.cpp
 Jasmine Dayinta
 j.dayinta@jacobs-university.de*/

#include <iostream>
using namespace std;

//function that evaluates whether the number inputted is positive, negative or 0
int sign (int m){
    if(m < 0){
        return -1;
    } else if (m > 0) {
        return 1;
    } else {
        return 0;
    }
}

//main funtion that asks for an input and calls the sign function to evaluate the inputted value
int main(int argc , char ** argv) {
    int s;
    cout << "Enter a real number: " << endl;
    cin >> s;
    
    cout << sign(s) << endl; //outputting the answer
    cout << "Note, the output means: " << endl;
    cout << "1: a positive number" << endl;
    cout << "-1: a negative number" << endl;
    cout << "0 is just 0" << endl;
    
    return 0;
}
