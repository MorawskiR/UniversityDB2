#pragma once




#include <array>
#include <fstream>
#include <iostream>
#include <memory>
#include <string>
#include <vector>

#include "Student.hpp"
#include "Person.hpp"
#include "Employee.hpp"
class University{

 std::vector<Person*> persons_;
    
    public:
    University();
//     University(const std::vector<Person*> student_list);
   ~University() = default;

void addPerson(Person &person);
//     void addStudent(const Student& student);
    void DisplayDB();

//     Student SearchByName(const std::string &surname);
//     Student SearchByPesel(const std::string &pesel);

//     void SortByPesel();
    
//     void RemoveByIndex(const size_t &index);

//     std::vector<Student> Test(std::vector<Student>);

//     void SaveToFile();

//     void ExitProgram();

//     std::vector<Student> returnStudentList();

};

