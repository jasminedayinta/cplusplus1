//
//  main.cpp
//  a1p6
//
//  Created by Jasmine Juwono on 09.10.17.
//  Copyright © 2017 Jasmine Juwono. All rights reserved.
//

/*CH08-320142
 a1_p6.cpp
 Jasmine Dayinta
 j.dayinta@jacobs-university.de*/

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(static_cast<unsigned int>(time(0)));
    int num, guess;
    int tries = 0;
    
    //generating random numbers from 1 - 100
    num = rand() % 100 + 1;
    //cout << num; //could be implemented to see if the game works
    
    //asking user for guess
    cout << "Enter your guess " << endl;
    cin >> guess;
    
    /*while loop that keeps checking if the guess is correct. Incrementing int tries
    everytime the user inputs*/
    while(guess != num) {
    if (guess > num){
        cout << "Too high, guess again" << endl;
        cin >> guess;
        tries++;
    } else if (guess < num){
        cout << "Too low, guess again" << endl;
        cin >> guess;
        tries++;
    } else if (guess == num){
        cout << "Correct! It took you " << tries << " tries" << endl;
    }
    
    }
    return 0;
}
