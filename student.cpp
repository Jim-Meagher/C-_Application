/*
 *  FileName:       student.cpp
 *  Project Name:   JYM1
 *  Purpose: Student class implementation. Contains the class function
 *  definitions.
 *  Created by James Meagher on 19 Mar 2022.
*/

#include "student.h"
#include <iostream>
#include <string>
using namespace std;

Student::Student(string ID, string fName, string lName, string email, int studentAge,
                 int numberOfDaysToCompleteEachCourse[ARRAY_SIZE], DegreeProgram degree)
        :studentID{ ID }, firstName{ fName }, lastName{ lName }, emailAddress{ email }, age{ studentAge },
         numberOfDaysToCompleteEachCourse( ), degreeProgram{ degree }{ }

Student::~Student( ) { }

//mutators aka setters
void Student::setStudentID(string ID){
    studentID = ID;
}

void Student::setFirstName(string fName){
    firstName = fName;
}

void Student::setLastName(string lName) {
    lastName = lName;
}

void Student::setEmailAddress(string email){
    emailAddress = email;
}

void Student::setAge(int studentAge){
    age = studentAge;
}

void Student::setNumberOfDaysToCompleteEachCourse(int *daysToCompleteEachCourse[ ]){
    for (auto i{0}; i < ARRAY_SIZE; ++i ){
       numberOfDaysToCompleteEachCourse[i] = *daysToCompleteEachCourse[i];
    }

}

void Student::setDegreeProgram(DegreeProgram degree){
    if (degree == NETWORK){
        degreeProgram = DegreeProgram::NETWORK;
    }
    else if (degree == SECURITY){
        degreeProgram = DegreeProgram::SECURITY;
    }
    else{
        degreeProgram = DegreeProgram::SOFTWARE;
    }
}

//accessor aka getters
string Student::getStudentID( ) const {
    return studentID;
}

string Student::getFirstName( ) const{
    return firstName;
}

string Student::getLastName( ) const{
    return lastName;
}

string Student::getEmailAddress( ) const{
    return emailAddress;
}
int Student::getAge( ) const{
    return age;
}

int Student::getNumberOfDaysToCompleteEachCourse( ) const{
    return *numberOfDaysToCompleteEachCourse;
}


string Student::getDegreeProgram( ) const{
    switch (degreeProgram) {
        case NETWORK:
            return "NETWORK";
            break;
        case SECURITY:
            return "SECURITY";
            break;
        case SOFTWARE:
            return "SOFTWARE";
            break;
    }
}

// Print specific student data
void Student::print( ) const{
    cout << getStudentID( ) << "\t";
    cout << "First Name: " << getFirstName( ) << "\t";
    cout << "Last Name: " << getLastName( ) << "\t";
    cout << "Age: " << getAge( ) << "\t";
    cout << "Days in Courses: " << getNumberOfDaysToCompleteEachCourse( ) << "\t";
    cout << "Email: " << getEmailAddress( ) << "\t";
    cout << "Degree Program: " << getDegreeProgram( ) << "\n";
}

