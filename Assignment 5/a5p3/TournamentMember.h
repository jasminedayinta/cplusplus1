//
//  TournamentMember.hpp
//  a5p3
//
//  Created by Jasmine Juwono on 24.10.17.
//  Copyright © 2017 Jasmine Juwono. All rights reserved.
//

/*CH08-320142
 a5_p3.cpp TournamentMember.h
 Jasmine Dayinta
 j.dayinta@jacobs-university.de*/

#ifndef TournamentMember_h
#define TournamentMember_h

#include <stdio.h>
#include <iostream>

using namespace std;

class TournamentMember{
    
private:
    
    static string location;
    
    char *firstName;
    char *lastName;
    char *dateOfBirth;
    string nationality;
    string gender;
    
public:
    
    //constructors functions
    TournamentMember();
    TournamentMember(char* fn, char* ln, char* dob, const string& nationality, const string& gender);
    TournamentMember(const TournamentMember& t);
    
    //destructor for the class
    ~TournamentMember();
    
    //setter methods
    inline void setFirstName(char *firstName){
        
        int i;
        char *c = firstName;
        for(i = 0; *c != '\0'; i++, c++){
            this->firstName[i] = *c;
        }
    }
    
    inline void setLastName(char *lastName){
        
        int i;
        char *c = lastName;
        for(i = 0; *c != '\0'; i++, c++){
            this->lastName[i] = *c;
        }
    }
    
    inline void setDateOfBirth(char *dateOfBirth){
        
        int i;
        char *c = dateOfBirth;
        for(i = 0; *c != '\0'; i++, c++){
            this->dateOfBirth[i] = *c;
        }
    }
    
    inline void setNationality(const string &nationality){
        this->nationality = nationality;
    }
    
    inline void setGender(const string &gender){
        this->gender = gender;
    }
    
    //getter methods
    inline char* getFirstName() const{
        return firstName;
    }
    
    inline char* getLastName() const{
        return lastName;
    }
    
    inline char* getDateOfBirth() const{
        return dateOfBirth;
    }
    
    inline string getNationality() const{
        return this->nationality;
    }
    
    inline string getGender() const{
        return this->gender;
    }
    
    //service methods
    void print() const;
    
    static void locationChange(const string&);
    
};

class Player : public TournamentMember{

private:
    int number, numgoals;
    string position;
    bool rightFoot;

//constructors functions
public:
    Player();
    Player(const int& n, const int& ng,const string& p, const bool& rf);
    Player(const int& n, const string& p, const int& ng,
           const bool& rf, char *fn, char *ln, char *dob,
           string nationality, string gender);
    Player(const Player& p);
    
    //destructor for the class
    ~Player();
    
    //setter methods
    inline void setNumber(const int &n){
        this->number = n;
    }
    
    inline void setPosition(const string &p){
        this->position = p;
    }
    
    inline void setFoot(const bool &rf){
        this->rightFoot = rf;
    }
    
    //getter methods
    inline int getNumber() const{
        return this->number;
    }
    
    inline string getPosition() const{
        return this->position;
    }
    
    inline int getGoals() const{
        return this->numgoals;
    }
    
    inline int getrightFoot() const{
        return this->rightFoot;
    }
    
    //service methods
    void print() const;
    
    void inGoals();
};

#endif /* TournamentMember_h */
