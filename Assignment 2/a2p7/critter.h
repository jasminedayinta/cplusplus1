//
//  main.cpp
//  critterh
//
//  Created by Jasmine Juwono on 11.10.17.
//  Copyright © 2017 Jasmine Juwono. All rights reserved.
//

/*CH08-320142
 a2_p7.cpp critterh
 Jasmine Dayinta
 j.dayinta@jacobs-university.de*/

#include <string>


class Critter
{
private:
    std::string name;
    int hunger;
    int boredom;
    double height;
    //expansion of choice
    int age;
    std::string gender;
    
public:
    // setter methods
    void setName(std::string& newname);
    void setHunger(int newhunger);
    void setBoredom(int newboredom);
    void setAge(int newage); //setter of the first choice expansion
    void setGender(std::string& newgender); //second setter
    // getter method
    int getHunger();
    int getAge();
    string getGender();
    // service method
    void print();
};
