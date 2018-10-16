//
//  main.cpp
//  a1p4
//
//  Created by Jasmine Juwono on 09.10.17.
//  Copyright © 2017 Jasmine Juwono. All rights reserved.
//

/*CH08-320142
 a1_p4.cpp
 Jasmine Dayinta
 j.dayinta@jacobs-university.de*/

#include <iostream>

using namespace std;

/*function that calculates the difference between the two integers.
 If statement to check which integer is the larger value in order to 
 not output a negative difference*/
int mycount(int a, int b){
    if (a > b){
        return a - b;
    } else {
        return b - a;
    }
}

//function that checks the occurance of char i in string s using a for loop
int mycount(string s, char i){
    unsigned int j;
    int count = 0;
    for(j = 0; j < s.length(); j++){
        if(s[j] == i){
            count++;
        }
    }
    if (j == 0){
        return -1;
    }
    return count;
    
}

//main function that asks for input and calls the mycount functions above
int main(int argc, const char * argv[]) {
    int a, b;
    string c;
    char d;
    
    cout << "Enter an integer: " << endl;
    cin >> a;
    cout << "Enter an integer: " << endl;
    cin >> b;
    
    cout << "Enter a string: " << endl;
    cin >> c;
    cout << "Enter a character: " << endl;
    cin >> d;
    
    cout << "The difference between the two integers is: " << mycount(a, b) << endl;
    cout << "The character " << d << " occured " << mycount(c, d) << " time(s)" << endl;
    
    return 0;
}
