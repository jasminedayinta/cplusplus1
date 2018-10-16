//
//  main.cpp
//  a4p2
//
//  Created by Jasmine Juwono on 18.10.17.
//  Copyright © 2017 Jasmine Juwono. All rights reserved.
//

/*CH08-320142
 a4_p2.cpp
 Jasmine Dayinta
 j.dayinta@jacobs-university.de*/

#include <iostream>

using namespace std;

class Creature {
    public:
        Creature();
        void run() const;
    
    protected:
        int distance;
    };

Creature::Creature(): distance(10)
    {}

void Creature::run() const {
    cout << "running " << distance << " meters!\n";
}

class Wizard : public Creature {
    public:
        Wizard();
        void hover() const;
    
    private:
        int distFactor;
};

Wizard::Wizard() : distFactor(3)
    {}

void Wizard::hover() const {
    cout << "hovering " << (distFactor * distance) << " meters!\n";
}

//creating the two other type of creatures
class Sleeping : public Creature{
    
public:
    Sleeping();
    void hours();
    
private:
    int sleepinghours;
};

Sleeping::Sleeping() : sleepinghours(10)
    {}

void Sleeping::hours(){
    cout << "Number of sleeping hours " << (sleepinghours*distance) << endl;
}

class Pace : public Creature {
    public:
        Pace();
        void speed();
    
    private:
        int fastness;
};

Pace::Pace() : fastness(150)
    {}

void Pace::speed(){
    cout << "He is " << fastness*distance << " fast." << endl;
}

//calling the functions in the main
int main() {
    cout << "Creating an Creature.\n";
    Creature c;
    c.run();
    
    cout << "\nCreating a Wizard.\n";
    Wizard w;
    w.run();
    w.hover();
    
    cout << "\nCreating a Sleepyhead\n";
    Sleeping s;
    s.hours();
    
    cout << "\nCreating a Pace\n";
    Pace p;
    p.speed();
    
    return 0;
}
