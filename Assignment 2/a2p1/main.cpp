//
//  main.cpp
//  a2p1
//
//  Created by Jasmine Juwono on 06.10.17.
//  Copyright © 2017 Jasmine Juwono. All rights reserved.
//

/*CH08-320142
 a2_p1.cpp
 Jasmine Dayinta
 j.dayinta@jacobs-university.de*/

#include <iostream>
using namespace std;

/*first overloaded function: checks if the int value is positive (
by passing it through the for loop) and checking if it's greater than 0.
 Then, using modulo to see if the remainder is not equal to 0, it's odd*/
int myfirst(int arr[], int s){
    int j;
    for (j = 0; j < s; j++){
        if(arr[j] > 0){
            if(arr[j] % 2 != 0){
                return arr[j];
            }
        }
    }
    return -1;
}

/*second overloaded function for type double: checking if it doesn't have a fractional
 part by setting it equal to the integer value of itself*/
double myfirst(double arr[], int s) {
    int j;
    for(j = 0; j < s; j++){
        if(arr[j] > 0){
            if(arr[j] == (int)arr[j]){
                return arr[j];
            }
        }
    }
    return -1.1;
}

/*third overloaded function for char: the if statement checks if it's a vowel*/
char myfirst(char arr[], int s){
    int j;
    for(j = 0; j < s; j++){
        if(arr[j] == 'A' || arr[j] == 'E' || arr[j] == 'U' || arr[j] == 'I' ||
           arr[j] == 'O' || arr[j] == 'a' || arr[j] == 'e' || arr[j] == 'u' ||
           arr[j] == 'i' || arr[j] == 'o'){
            return arr[j];
            }
        }
return 0;
}

//main function: initialized my own variables and called the myfirst functions
int main(){

    int i = 5;
    int arr[5] = {1, 2, 3, 4, 5};
    double arr1[6] = {1.2, 2.5, 3.0, 4.0, 5.0};
    char arr2[4] = {'M','O', 'I', 'J'};
   
    cout <<  myfirst(arr, i) << endl;
    cout << myfirst(arr1,i) << endl;
    cout << myfirst(arr2, i) << endl;
    
    return 0;
}
