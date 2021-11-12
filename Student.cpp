#include <iostream>
#include "Student.hpp"


Student::Student() {
   
}

// Student::Student(std::string name, std::string surname, std::string address, size_t indexNumber, std::string pesel, std::string gender)
//     : name_(name), surname_(surname), address_(address), indexNumber_(indexNumber), pesel_(pesel), gender_(gender){}

   Student::Student(std::string name, std::string surname, std::string address, std::string pesel, std::string gender, size_t indexNumber)
    : name_(name), surname_(surname), address_(address), pesel_(pesel), gender_(gender), indexNumber_(indexNumber){}

Student::~Student() {}

void Student::setIndex(const size_t indexNumber) {
    indexNumber_ = indexNumber;
}

size_t Student::getIndex() const {return indexNumber_;}
