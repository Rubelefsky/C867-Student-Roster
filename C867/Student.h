// Student.h
// Created by Brandon Rubell - C867 Student Roster

#pragma once
#include <iostream>
#include <iomanip>
#include "DegreeType.h"
using std::string;
using std::cout;
//using std::endl;

class Student
{
public:
	const static int daysInCourse = 3;
private:
	string studentID;
	string firstName;
	string lastName;
	string emailAddress;
	int studentAge;
	int days[daysInCourse];
	DegreeType degreeType;
public:
	Student();/*parameterless constructor - sets to default values - you always write this!*/
	Student(string studentID, string firstName, string lastName, string emailAddress, int studentAge, int days[], DegreeType degreeType);
	~Student(); /*Destructor*/

    /*Getters*/
	string getID();
	string getFirst();
	string getLast();
	string getEmail();
	int getAge();
	int* getDays();
	DegreeType getDegreeType();

	/*Setters*/
	void setID(string ID);
	void setFirst(string firstName);
	void setLast(string lastName);
	void setEmail(string emailAddress);
	void setAge(int studentAge);
	void setDays(int days[]);
	void setDegreeType(DegreeType dt);

	static void printHeader(); /*Displays a header for the data to follow*/

	void print(); /*Displays the students data */


};



/*1. Create the class Student  in the files student.h and student.cpp, which includes each of the following variables:
 •  student ID
 •  first name
 •  last name
 •  email address
 •  age
 •  array of number of days to complete each course
 •  degree program*/