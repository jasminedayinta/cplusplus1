//
//  main.cpp
//  a1p5
//
//  Created by Jasmine Juwono on 09.10.17.
//  Copyright © 2017 Jasmine Juwono. All rights reserved.
//

/*CH08-320142
 a1_p5.cpp
 Jasmine Dayinta
 j.dayinta@jacobs-university.de*/

#include <iostream>

using namespace std;

int main() {
    //declaring and initializing variables
    char c = '\0';
    char line[100];
    bool b = false;
    int i = 0;
    
    //asking user for input
    cout << "Enter a character " << endl;
    cin >> c;
    
    //if statement that checks if character inputted is not q. If yes, bool b becomes true*/
   if (c != 'q'){
        b = true;
    } else {
        return 0;
    }
    
    /*while loop that keeps checking for the inputted character. Once it hits q, it stops and add
     the previous characters inputted to the array called line*/
    while (b){
        line[i] = c;
        cin >> c;
        b = false;
        if (c == 'q'){
            line[i + 1] = '\0';
        } else {
            b = true;
        }
        i++;
    }
    cout << "The string of character inputted: " << line << endl; //printing output

return 0;
}


