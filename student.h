/*
 *  FileName:       student.h
 *  Project Name:   JYM1
 *  Purpose: Student class specification. Contains the class declaration.
 *  Created by James Meagher on 19 Mar 2022.
 */

#ifndef _STUDENT_H_
#define _STUDENT_H_

#include "degree.h"
#include <string>
using namespace std;

class Student {
    private:
        static const int ARRAY_SIZE {3};
        string studentID;
        string firstName;
        string lastName;
        string emailAddress;
        int age;
        int numberOfDaysToCompleteEachCourse[ARRAY_SIZE];
        DegreeProgram degreeProgram;
    
    public:
    //Constructor
    Student(string ID = "AA",
            string fName = "NoName",
            string lName = "NoName",
            string email = "123@abc.com",
            int studentAge = 00,
            int numberOfDaysToCompleteEachCourse[ARRAY_SIZE] = { },
            DegreeProgram degree = SECURITY);
    
    //mutators aka setters
    void setStudentID(string ID);
    void setFirstName(string fName);
    void setLastName(string lName);
    void setEmailAddress(string email);
    void setAge(int studentAge);
    void setNumberOfDaysToCompleteEachCourse(int *daysToCompleteEachCourse[ ]);
    void setDegreeProgram(DegreeProgram degree);
    
    //accessor aka getters
    string getStudentID( ) const;
    string getFirstName( ) const;
    string getLastName( ) const;
    string getEmailAddress( ) const;
    int getAge( ) const;
    string getDegreeProgram( ) const;
    int getNumberOfDaysToCompleteEachCourse( ) const;
    void print( ) const;
    
    // Destructor
    ~Student( );
};

#endif /* student_h */
