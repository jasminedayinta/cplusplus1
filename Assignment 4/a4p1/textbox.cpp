//
//  main.cpp
//  a4p1
//
//  Created by Jasmine Juwono on 13.10.17.
//  Copyright © 2017 Jasmine Juwono. All rights reserved.
//

/*CH08-320142
 a4_p1.cpp testbox.cpp
 Jasmine Dayinta
 j.dayinta@jacobs-university.de*/

#include <iostream>
#include "Box.h"
#include <cstdlib>

using namespace std;

int main() {
    unsigned int i, j, a, b, c;
    Box hei, wid, dep, total;
    
    //asking user how many boxes in total
    cout << "Enter how many boxes " << endl;
    cin >> j;
    
    int *dimensions = new int[j];
    
    //getting the input from user
    for (i = 0; i < sizeof(dimensions); i++){
    cout << "Enter an integer for the height " << endl;
        cin >> a;
        hei.setHeight(a); //setting the instances to the different class definitions
    cout << "Enter an integer for the width " << endl;
        cin >> b;
        wid.setWidth(b);
    cout << "Enter an integer for the depth " << endl;
    cin >> c;
        dep.setDepth(c);
    }
    
    
    for (i = 0; i < sizeof(dimensions); i++){
       //dimensions[i] = i.getvolume(); //trying to get volume from each element of the array
        cout << "The volume of each box is " << dimensions[i] << endl;
    }
    return 0;
}
    
