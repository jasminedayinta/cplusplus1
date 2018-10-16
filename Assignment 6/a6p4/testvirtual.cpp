/*CH08-320142
 a6_p4.cpp testvirtual.cpp
 Jasmine Dayinta
 j.dayinta@jacobs-university.de*/

#include <iostream>
using namespace std;
#include "Area.h"
#include "Circle.h"
#include "Ring.h"
#include "Rectangle.h"

/*
                                    ----------
                                   |   Area   |
                                    ----------
                                         |
                                         |
            --------------------------------------------------------------
           |                             |                                |
           |                             |                                |
       ----------                  -----------                        ----------
      |  Cirlce  |                | Rectangle |                      |  Square  |
       ----------                  -----------                        ----------
           |
           |
 
       ----------
      |   Ring   |
       ----------
 */

const int num_obj = 6;
int main() {
	Area *list[num_obj];						// (1) creating a pointer list under the class Area, titled num_obj
	int index = 0;								// (2) setting the index of objects to 0
	double sum_area = 0.0;                      // (3) setting the area to 0
    double sum_perimeter = 0.0;
    
	cout << "Creating Ring: ";
	Ring blue_ring("BLUE", 5, 2);				// (4) calling the blue_ring function inside the Ring class and setting "Blue", 5, 2, as the const char and the two double outer and inner values
    
	cout << "Creating Circle: ";
	Circle yellow_circle("YELLOW", 7);
    
	cout << "Creating Rectangle: ";
	Rectangle green_rectangle("GREEN",5,6);
    
	cout << "Creating Circle: ";
	Circle red_circle("RED", 8);
    
	cout << "Creating Rectangle: ";
	Rectangle black_rectangle("BLACK", 10, 20);
    
	cout << "Creating Ring: ";
	Ring violet_ring("VIOLET", 100, 5);
    
	list[0] = &blue_ring;						// (5) assigning the value at index 0 of the array list to the blue_ring function
	list[1] = &yellow_circle;
	list[2] = &green_rectangle;
	list[3] = &red_circle;
	list[4] = &black_rectangle;
	list[5] = &violet_ring;
    
	while (index < num_obj) {					// (7) As long as the index is less than the number of elements in the list
		(list[index])->getColor();				// (8) Retrieve the color of the shape located at index in the list
		sum_area += (list[index++])->calcArea();
	}
	cout << "\nThe total area is "
			<< sum_area << " units " << endl;	// (9) printing out the area
    
    //while loop that sums the perimeter of all objects
    while (index < num_obj) {
        (list[index])->getColor();		
        sum_perimeter += (list[index++]) -> calcPerimeter();
    }
    cout << "\nThe total perimeter is " << sum_perimeter << " units " << endl;
	return 0;
}
