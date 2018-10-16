//
//  main.cpp
//  a5p4
//
//  Created by Jasmine Juwono on 24.10.17.
//  Copyright © 2017 Jasmine Juwono. All rights reserved.
//

/*CH08-320142
 a5_p4.cpp testReferee.cpp
 Jasmine Dayinta
 j.dayinta@jacobs-university.de*/

#include <iostream>
#include "TournamentMember.h"

int main() {
    //initializing variables
    Player *pl[50];
    int nump, i;
    
    cin >> nump;
    
    for(i = 0; i < nump; i++){
        int n, ng;
        string p;
        bool rf;
        cout << "Enter information in the following order: number, goals, position, foot) \n";
        cin >> n >> p >> ng >> rf;
        pl[i] = new Player(n, ng, p, rf);
    }
    
    Referee r;
    
    while(true){
        char c;

        int j;
        cin >> j;
        
        cout << "Enter y for yellow card, r for red card" << endl;
        cin >> c;
        
        if(c == 'y'){
            r.addToYellowCardList(pl[j]);
        } else {
            r.addToRedCardList(pl[j]);
        }
    }

    for(i = 0; i < nump; i++){
        delete pl[i];
    }
    return 0;
}
