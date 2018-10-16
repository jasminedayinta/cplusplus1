//
//  main.cpp
//  a4p3
//
//  Created by Jasmine Juwono on 18.10.17.
//  Copyright © 2017 Jasmine Juwono. All rights reserved.
//

/*CH08-320142
 a4_p3.cpp testcreature.cpp
 Jasmine Dayinta
 j.dayinta@jacobs-university.de*/

#include <iostream>
#include "Creature.h"

using namespace std;

int main(){
    
    cout << "Creating an Creature.\n";
    Creature c;
    c.run();

    cout << "\nCreating a Wizard.\n";
    Wizard w;
    w.run();
    w.hover();

    cout << "\nCreating a Sleepyhead\n" << endl;
    Sleeping s;
    s.hours();

    cout << "\nCreating a Pace\n" << endl;
    Pace p;
    p.speed();

return 0;
}
