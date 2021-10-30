// Przechowywanie rekordów pracowników uczelni o strukturze: imię, nazwisko, PESEL, płeć, adres, zarobki

#pragma once
#include <string>
#include "Person.hpp"

class Employee : public Person
{

private: 

    std::string name_ ;
    std::string surname_;
    std::string pesel_;
    std::string gender_;
    std::string address_;
    size_t salary_;

public:
    Employee();
    // {
    //     name_ = "unknown";
    //     surname_ = "unknown";
    //     pesel_ = "none";
    //     gender_ = "gender";
    //     address_ = "address";
    // }    
    
    Employee(std::string name, std::string surname, std::string address, std::string pesel, std::string gender, size_t salary);
    
    ~Employee();

    size_t getSalary();

    void set_salary(size_t salary);
};