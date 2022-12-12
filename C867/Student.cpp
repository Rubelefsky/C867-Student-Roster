#include "Student.h"
Student::Student()
{
	this->studentID = ""; /*Empty string is something, nullptr is nothing - a  big difference*/
	this->firstName = "";
	this->lastName = "";
	this->emailAddress = "";
	this->studentAge = 0;
	for (int i = 0; i < daysInCourse; i++) this->days[i] = 0; //Sets default day count to 0
	this->degreeType = DegreeType::SECURITY; //Sets default degree to one in degree.h (0)
}

Student::Student(string studentID, string firstName, string lastName, string emailAddress, int studentAge, int days[], DegreeType degreeType)// Full constructor

{
	this->studentID = studentID;
	this->firstName = firstName;
	this->lastName = lastName;
	this->emailAddress = emailAddress;
	this->studentAge = studentAge;
	for (int i = 0; i < daysInCourse; i++) this->days[i] = days[i];
	this->degreeType = degreeType;
}

Student::~Student() {}//Always write the destructor

//getters or accessors
string Student::getID() { return this->studentID;  }
string Student::getFirst() { return this->firstName; }
string Student::getLast() { return this->lastName;  }
string Student::getEmail() { return this->emailAddress;  }
int Student::getAge() { return this->studentAge; }
int* Student::getDays() { return this->days; }
DegreeType Student::getDegreeType() { return this->degreeType; }


//setters
void Student::setID(string ID) { this->studentID = studentID; }
void Student::setFirst(string firstName) { this->firstName = firstName; }
void Student::setLast(string lastName) { this->lastName = lastName; }
void Student::setEmail(string emailAddress) { this->emailAddress = emailAddress; }
void Student::setAge(int age) { this->studentAge = studentAge; }
void Student::setDays(int days[])
{
	for (int i = 0; i < daysInCourse; i++) this->days[i] = days[i];
}
void Student::setDegreeType(DegreeType dt) { this->degreeType = dt; }

void Student::printHeader() //Prints the header
{
	cout << "ID" << '\t' << "First" << '\t' << "Last" << '\t' << "Email Address" << '\t' << "Age" << '\t' << "Days to Complete" << '\t' << "Degree" << std::endl;
}   //this will be the print format 

void Student::print()
{
	cout << this->getID() << '\t'; //Tab seperated output and getters
	cout << this->getFirst() << '\t';
	cout << this->getLast() << '\t';
	cout << this->getEmail() << '\t';
	cout << this->getAge() << '\t';
	cout << this->getDays()[0] << ',';
	cout << this->getDays()[1] << ',';
	cout << this->getDays()[2] << '\t';
	cout << degreeTypeStrings[this->getDegreeType()] << '\n';
}






/* 2.  Create each of the following functions in the Student class:

a.  an accessor (i.e., getter) for each instance variable from part D1

b.  a mutator (i.e., setter) for each instance variable from part D1

c.  All external access and changes to any instance variables of the Student class must be done using accessor and mutator functions.

d.  constructor using all of the input parameters provided in the table

e.  print() to print specific student data*/