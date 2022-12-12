// degree.h
// Created by Brandon Rubell - C867 Student Roster

#pragma once
#include <string>
enum DegreeType {SECURITY, NETWORK, SOFTWARE};

/*Parallel array pops out a string for each DEGREE - use the DEGREE as an index*/
static const std::string degreeTypeStrings[] = { "SECURITY","NETWORK","SOFTWARE" };


// C.  Define an enumerated data type DegreeProgram for the degree programs containing the data type values SECURITY, NETWORK, and SOFTWARE.