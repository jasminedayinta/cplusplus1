//
//  main.cpp
//  a3p5
//
//  Created by Jasmine Juwono on 17.10.17.
//  Copyright © 2017 Jasmine Juwono. All rights reserved.
//

/*CH08-320142
 a3_p5.cpp
 Jasmine Dayinta
 j.dayinta@jacobs-university.de*/

#include <iostream>
#include <cstring>  // standard C string.h header file

using namespace std;

/*
	Naive string: the goal is to illustrate how copy constructors
	should be handled. See also charbuffer.cpp
 */

class NaiveString {
    //declaring variables
private:
    char *str;
public:
    NaiveString(const char*);
    NaiveString(const NaiveString&);
    NaiveString();
    void addition(char, char);
    void print();
};

//defining the constructors
NaiveString::NaiveString(){
    delete [] this-> str;
    cout << "Object deleted \n" << endl;
}

NaiveString::NaiveString(const char* t) {
    str = new char[strlen(t) + 1];
    strcpy(str, t);
}

/*
	Copy constructor: creates a new instance of
	naive string starting from an existing one
 */


NaiveString::NaiveString(const NaiveString& src) {
    cout << "The copy constructor is: " << endl;
    str = new char[strlen(src.str) + 1];
    strcpy(str, src.str);
    
    // please note that we can access src.str even if it is private
    // as we are inside the NaiveString class
}

/* replaces occurrences of oldchar by newchar */
void NaiveString::addition(char oldchar, char newchar) {
    unsigned int i;
    for (i = 0; i < strlen(str); i++)
        if (str[i] == oldchar)
            str[i] = newchar;
}

void NaiveString::print() {
    cout << str << endl;
}

void funcByVal(NaiveString s) {
    cout << "funcbyval() being called" << endl;
    s.addition('B', 'C');
    s.print();
}

void funcByRef(NaiveString &s){
    cout << "funcbyval() being called" << endl;
    s.addition('C', 'B');
    s.print();
}

int main() {
    NaiveString a("aBcBdB");
    a.print();
    cout << "About to call funcbyval()" << endl;
    funcByVal(a);
    a.print();
    NaiveString b(a);
    b.print();
    cout << "About to call funcbyref()" << endl;
    funcByRef(b);
    b.print();
}
