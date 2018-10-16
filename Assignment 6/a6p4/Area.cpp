/*CH08-320142
 a6_p4.cpp Area.cpp
 Jasmine Dayinta
 j.dayinta@jacobs-university.de*/

#include <iostream>
#include <cstring>
#include "Area.h"
using namespace std;

Area::Area(const char* n) {
	strncpy(color, n, 10);
	cout << "Area constructor being called...\n";
}

Area::~Area() {
}

//defining the random functions for both string and size
void Area::setColor(const std::string &a){
    randomNumber = rand();
    die = (randomNumber % 4);//changing it to 4 because there are only 4 elements in the array
}

void Area::setSize(const double &s) {
    randomNumber = rand() % 50 + 1;
}

std::string Area::getColor(){
    return this->arr[die];
}

double Area::getSize(){
    return this->randomNumber;
}
