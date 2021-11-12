
#pragma once
#include <string>
#include <cstdlib>
#include <vector>
#include <iostream>
#include <fstream>

class Person{

protected: 

    std::string name_ ;
    std::string surname_;
    std::string pesel_;
    std::string gender_;
    std::string address_;
    
 public : 
    Person();
    // {
    //     name_ = "unknown";
    //     surname_ = "unknown";
    //     pesel_ = "none";
    //     gender_ = "gender";
    //     address_ = "address";
    // }    


    Person(std::string name, std::string surname, std::string address, std::string pesel, std::string gender);
    
    virtual ~Person();

    std::string getName()  ;
    std::string getSurname();
    std::string getAddress();
    std::string getPesel() ;
    std::string getGender();

    void set_name(const std::string &name) ;
    void setSurname(const std::string& surname) ;
    void setAddress(const std::string& address) ;
    void setPesel(const std::string& pesel)  ;
    void setGender(const std::string& gender) ;



};