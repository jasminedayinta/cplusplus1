//
//  main.cpp
//  a2p5
//
//  Created by Jasmine Juwono on 10.10.17.
//  Copyright © 2017 Jasmine Juwono. All rights reserved.
//

/*CH08-320142
 a2_p5.cpp
 Jasmine Dayinta
 j.dayinta@jacobs-university.de*/

#include <iostream>
#include <cstring>

using namespace std;

//function that checks if it's palindrome
bool isPalindrome(string s){
    unsigned int i;
    bool b = true;
    
    for(i = 0; i < s.length(); i++){
        if(s[i] != s[s.length() - i - 1]){
           b = false ;
        }
        return b;
    }
    return b;
}

int main() {
    //declaring variables
    int i;
    string s;
    string end = "stop";
    
    //asking user for input
    cout << "Enter a string ";
    cin >> s;
    
    //for loop that checks if the user wants to keep entering input
    for(i = 0; i < 100; i++){
        if(s == end){
            break;
        } else {
            cout << isPalindrome(s) << endl;
        }
    }
    
    return 0;
}
