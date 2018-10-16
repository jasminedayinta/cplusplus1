//
//  main.cpp
//  a2p2
//
//  Created by Jasmine Juwono on 06.10.17.
//  Copyright © 2017 Jasmine Juwono. All rights reserved.
//

/*CH08-320142
 a2_p2.cpp
 Jasmine Dayinta
 j.dayinta@jacobs-university.de*/

#include <iostream>
using namespace std;

/*three different swap functions, one for each type: int, double, const char.
 It is swapped by using the real call-by-reference, explained in the powerpoint
 slides*/
void swap(int &a, int &b){
    int i = a;
    a = b;
    b = i;
}

void swap (double &a, double &b){
    double i = a;
    a = b;
    b = i;
}

void swap(const char *&str1, const char *&str2){
    const char *i = str1;
    str1 = str2;
    str2 = i;
    
}

//main function given in the question
int main(void) {
    int a = 5, b = 10;
    double x = 5.2, y = 10.7;
    const char *str1 = "One";
    const char *str2 = "Two";
    
    cout << "a = " << a << ", b = " << b << endl;
    cout << "x = " << x << ", y = " << y << endl;
    cout << "str1 = " << str1 << ", str2 = " << str2 << endl;
    
    swap(a, b);
    swap(x, y);
    swap(str1, str2);
    
    cout << "a = " << a << ", b = " << b << endl;
    cout << "x = " << x << ", y = " << y << endl;
    cout << "str1 = " << str1 << ", str2 = " << str2 << endl;
    
    return 0;
}
