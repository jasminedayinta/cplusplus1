//
//  main.cpp
//  a2p4
//
//  Created by Jasmine Juwono on 10.10.17.
//  Copyright © 2017 Jasmine Juwono. All rights reserved.
//

/*CH08-320142
 a2_p4.cpp
 Jasmine Dayinta
 j.dayinta@jacobs-university.de*/

#include <iostream>

using namespace std;

int main() {
    //declaring and initializing variables
    srand(static_cast<unsigned int>(time(0)));
    int tries = 1;
    int num = rand() % 15 + 1;
    int j;
    unsigned int i;
    string guess, play;
    string end = "quit";
    
    //initizialing the array of strings
    string arr[15] = {"computer", "television", "keyboard", "magazine", "book", "sock", "class",
        "teacher", "jacket", "phone", "website", "whiteboard", "bag", "shoes", "shirt"};
    
    string s = arr[num];
   
    //for loop that replaces the vowels
    for (i = 0; i < s.size(); i++){
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'u' || s[i] == 'o' || s[i] == 'i'){
                s[i] = '_';
            }
        }
    
    //the string for the user to guess
    cout << s << endl;
         
    //firist guess
    cout << "Guess the word (enter 'quit' to exit game)" << endl;
    cin >> guess;
    
    //for loop to check whether the user has guessed correctly or not
    for (j = 0; j < 100; j++){
        if (guess == end){
            break;
        } else if (guess == arr[num]){
            cout << "You've answered correctly!" << endl;
            cout << "It took you " << tries << " tries" << endl;
            break;
        } else if(guess != arr[num]) {
            cout << "Guess again" << endl;
            cin >> guess;
            tries++;
        }
    
    }

return 0;
}
