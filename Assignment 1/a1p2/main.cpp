//
//  main.cpp
//  a1.p2
//
//  Created by Jasmine Juwono on 05.10.17.
//  Copyright © 2017 Jasmine Juwono. All rights reserved.
//

/*CH08-320142
 a1_p2.cpp
 Jasmine Dayinta
 j.dayinta@jacobs-university.de*/

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    //declaring the variables
    int nr, i;
    float val;
    string s, s1;
    
    cout << "Enter an integer: " << endl; //asking the user for an int
    cin >> nr;

    cout << "Enter a float: " << endl; //asking the user for a float
    cin >> val;
    
    /*putting another getline before because without this, the program will think
     the user is done inputting answers when the user pressed the enter button*/
    getline(cin, s);
    
    cout << "Enter a string: " << endl; //asking the user for a string
    getline(cin, s);
    
    //for loop that prints val and s nr number of times
    for (i = 0; i < nr; i++){
        cout << val << " " << s << endl;
    }
    
    return 0;
}
