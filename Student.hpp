#pragma once
#include "Person.hpp"

#include <string>
#include <vector>
#include <memory>

class Student : public Person{

private: 

    size_t indexNumber_{0};
 public : 
    Student();
    Student(std::string name, std::string surname, std::string address, std::string pesel, std::string gender, size_t indexNumber)
    : Person(name, surname, address, pesel, gender), indexNumber_(indexNumber_) {}

    ~Student();

    void setIndex(const size_t);

    size_t getIndex() const ;

};