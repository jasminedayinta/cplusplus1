//
//  main.cpp
//  a4p4
//
//  Created by Jasmine Juwono on 18.10.17.
//  Copyright © 2017 Jasmine Juwono. All rights reserved.
//

/*CH08-320142
 a4_p4.cpp dyncreature.cpp
 Jasmine Dayinta
 j.dayinta@jacobs-university.de*/

#include <iostream>
#include "Creature.h"

using namespace std;

int main() {
    //while loop until input is entered
    while(true){
        char c;
        cout << "Enter object to create: \n";
        cin >> c;
        
        if(c == 'w'){
            Wizard *w = new Wizard; //dynamically creating
            w->hover();
            delete w;
        } else if(c == '1'){
            Sleeping *s = new Sleeping;
            s->hours();
            delete s;
        } else if(c == '2'){
            Pace *p = new Pace;
            p->speed();
            delete p;
        } else if(c == 'q'){
            break;
        }
    }
    
    return 0;
}
