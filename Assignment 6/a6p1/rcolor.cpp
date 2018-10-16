//
//  main.cpp
//  a6p1
//
//  Created by Jasmine Juwono on 20.10.17.
//  Copyright © 2017 Jasmine Juwono. All rights reserved.
//

/*CH08-320142
 a6_p1.cpp
 Jasmine Dayinta
 j.dayinta@jacobs-university.de*/

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

//creating the function
string rcolor(){
    int die;
    int randomNumber;
    string arr[4] = {"GREEN", "BLUE", "RED", "YELLOW"}; //initializing the array
    
    randomNumber = rand();
    die = (randomNumber % 4);//changing it to 4 because there are only 4 elements in the array
    
    return arr[die];
}

int main(){
    int count = 0;
    
    // init random number generator
    srand(static_cast<unsigned int>(time(0)));
    while (count < 10) {
        cout << count + 1 << ": " << rcolor() << endl; //outputting the random color by calling the rcolor function
        count++;
    }
    return 0;
}
