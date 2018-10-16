//
//  TournamentMember.cpp
//  a5p3
//
//  Created by Jasmine Juwono on 24.10.17.
//  Copyright © 2017 Jasmine Juwono. All rights reserved.
//

/*CH08-320142
 a5_p3.cpp TournamentMember.cpp
 Jasmine Dayinta
 j.dayinta@jacobs-university.de*/

#include "TournamentMember.h"
#include <iostream>

using namespace std;

//defining the constructors
TournamentMember::TournamentMember() {
    this->firstName = new char[31];
    this->lastName = new char[31];
    this->dateOfBirth = new char[11];
}

TournamentMember::TournamentMember(char* fn, char* ln, char* dob,
                                   const string& nationality, const string& gender) {
    
    this->dateOfBirth = new char[11];
    this->firstName = new char[31];
    this->lastName = new char[31];
    
    int i;
    
    char *c = fn;
    for(i = 0; *c != '\0'; i++, c++){
        this->firstName[i] = *c;
    }
    
    char *c1 = ln;
    for(i = 0; *c1 != '\0'; i++, c1++){
        this->lastName[i] = *c1;
    }
    
    char *c2 = dob;
    for(i = 0; *c2 != '\0'; i++, c2++){
        this->dateOfBirth[i] = *c2;
    }
    
    this->nationality = nationality;
    
    this->gender = gender;
}

TournamentMember::TournamentMember(const TournamentMember &t) {
    this->dateOfBirth = new char[11];
    this->firstName = new char[31];
    this->lastName = new char[31];
    
    int i;
    
    char *c = t.firstName;
    for(i = 0; *c != '\0'; i++, c++){
        this->firstName[i] = *c;
    }
    
    char *c1 = t.lastName;
    for(i = 0; *c1 != '\0'; i++, c1++){
        this->lastName[i] = *c1;
    }
    
    char *c2 = t.dateOfBirth;
    for(i = 0; *c2 != '\0'; i++, c2++){
        this->dateOfBirth[i] = *c2;
    }
    
    this->nationality = t.nationality;
    this->gender = t.gender;
}

//the destructor method
TournamentMember::~TournamentMember() {
    delete [] this->dateOfBirth;
    delete [] this->firstName;
    delete [] this->lastName;
}

//the service methods
void TournamentMember::print() const{
    
    cout << "Enter First Name: ";
    char *c = this->firstName;
    for(; *c != '\0'; c++){
        cout << *c;
    }
    cout << endl;
    
    cout << "Enter Last Name: ";
    char *c2 = this->lastName;
    for(; *c2 != '\0'; c2++){
        cout << *c2;
    }
    cout << endl;
    
    cout << "Enter Date of Birth: ";
    char *c3 = this->dateOfBirth;
    for(; *c3 != '\0'; c3++){
        cout << *c3;
    }
    
    cout << endl;
    
    cout << "The person's nationality is " << nationality << endl;
    
    cout << "The gender of the person is " << gender << endl;
    
    cout << "The location is " << location << endl;
    
}

//initializing static method
string TournamentMember::location = "London";

void TournamentMember::locationChange(const string& newl){
    location = newl;
}

//Player class

//defining constructors
Player::Player() : TournamentMember(){
}

Player::Player(const int &n, const int &ng, const string &p,
               const bool &rf) : TournamentMember(){
    
    this->number = n;
    this->numgoals = ng;
    this->position = p;
    this->rightFoot = rf;
}

Player::Player(const int& n, const string& p, const int& ng,
               const bool& rf, char *fn, char *ln, char *dob,
               string nationality, string gender) :
TournamentMember(fn, ln, dob, nationality, gender){
    Player(n, ng, p, rf);
}

Player::Player(const Player &p) : TournamentMember(p){
    this->number = p.number;
    this->numgoals = p.numgoals;
    this->position = p.position;
    this->rightFoot = p.rightFoot;
}

//the destructor method
Player::~Player() {
}

//the service methods
void Player::print() const{
    
    cout << "Enter First Name: ";
    char *c = this->getFirstName();
    for(; *c != '\0'; c++){
        cout << *c;
    }
    cout << endl;
    
    cout << "Enter Last Name: ";
    char *c2 = this->getLastName();
    for(; *c2 != '\0'; c2++){
        cout << *c2;
    }
    cout << endl;
    
    cout << "Enter Date of Birth: ";
    char *c3 = this->getDateOfBirth();
    for(; *c3 != '\0'; c3++){
        cout << *c3;
    }
    
    cout << endl;
    
    cout << "The person's nationality is " << this -> getNationality() << endl;
    
    cout << "The gender of the person is " << this -> getGender() << endl;
    
    cout << "His/her numbers is " << this->number << endl;
    
    cout << "His/her position is " << this->position << endl;
    
    cout << "The number of goals is " << this->numgoals << endl;
    
    cout << "Is he/she right footed: " << (this->rightFoot ? "Y" : "N")
    << endl;
}

void Player::inGoals() {
    this->numgoals++;
}
