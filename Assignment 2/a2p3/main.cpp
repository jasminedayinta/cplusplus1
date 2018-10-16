//
//  main.cpp
//  a2p3
//
//  Created by Jasmine Juwono on 10.10.17.
//  Copyright © 2017 Jasmine Juwono. All rights reserved.
//

/*CH08-320142
 a2_p3.cpp
 Jasmine Dayinta
 j.dayinta@jacobs-university.de*/

#include <iostream>

using namespace std;

//finding the min value of array
int minval(int x[], int size){
    int small, i;

    small = x[0];
    for (i = 0; i < size; i++){
    if(x[i] < small){
        small = x[i];
        }
    }
    return small;
}

//adds the min value to every element in array
void add_min(int x[], int size){
    int j;
    for(j = 0; j < size; j++){
        x[j] += minval(x, size);
    }
}

//deallocating the entire array and deleting it
void deallocate(int x[]){
    delete x;
    x = NULL;
}

int main() {
    int i, j;
    
    //asking the user total number of integers for the array
    cout << "Enter total number of integer " << endl;
    cin >> j;
    getchar();
    
    //allocating memory for the array
    int *x = NULL;
    x = new int[j];
    
    //for loop that fills the array
    for (i = 0; i < j; i++){
        cout << "Enter an integer " << endl;
        cin >> x[i];
        getchar();
    }
    
    //for loop that prints the elements of the original array
    cout << "The original array is ";
    for(i = 0; i < j; i++){
        cout << x[i];
    }
    cout << "\n";
    
    //calling void add_min to sum the min value
    add_min(x, j);
    
    //for loop that prints the elements of the array after the addition
    cout << "The modified array is ";
    for(i = 0; i < j; i++){
        cout << x[i];
    }
    cout << "\n";
    
    //calling the deallocation function
    deallocate(x);
    
    return 0;
}
