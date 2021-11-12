#include "Employee.hpp"
#include <iostream>

Employee::Employee() {

        name_ = "No name employee";
        surname_ = "Unknown";
        address_ = "Honolulu";
        pesel_ = "9809890943";
        gender_ = "Male";
        salary_ = 1000;
    }

    Employee::Employee(std::string name, std::string surname, std::string address, std::string pesel, std::string gender, size_t salary)
    : name_(name), surname_(surname), address_(address), pesel_(pesel), gender_(gender), salary_(salary){}

    Employee::~Employee() {}

    size_t Employee::getSalary()
    {
        return salary_;
    }

    void Employee::set_salary(size_t salary)
    {
        salary_ = salary;
    }
