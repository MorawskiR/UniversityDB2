#include <iostream>
#include "Student.hpp"


Student::Student() {
    name_ = "No name";
    surname_ = "Unknown";
    address_ = "Honolulu";
    indexNumber_ = 12345;
    pesel_ = "9809890943";
    gender_ = "Male";
}

// Student::Student(std::string name, std::string surname, std::string address, size_t indexNumber, std::string pesel, std::string gender)
//     : name_(name), surname_(surname), address_(address), indexNumber_(indexNumber), pesel_(pesel), gender_(gender){}

Student::~Student() {}

void Student::setIndex(const size_t indexNumber) {
    indexNumber_ = indexNumber;
}

size_t Student::getIndex() const {return indexNumber_;}
