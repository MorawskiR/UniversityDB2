#include "University.hpp"
#include <algorithm>
#include <string>
#include "Student.hpp"
#include "Person.hpp"


University::University()
{
    persons_.reserve(20);
}

// University::University(const std::vector<Person*> student_list)
//     : student_list_(student_list)
// {
// }

void University::addPerson( Person &person)
{
    persons_.push_back(&person);
}

void University::DisplayDB()
{
    if (persons_.empty())
    {
        std::cout<<"No data to display.\n";
    }
    else
    {
      persons_[0]->getName();
      persons_[1]->getPesel();
        for (const auto &el : persons_)
        {
            std::cout<<el->getName()<<"\t";

            std::cout<<"\n";
        }
        
    }
    persons_[0]->getName();
    persons_[1]->getPesel();
}

// Student University::SearchByName(const std::string &surname)
// {
//     return *std::find_if(student_list_.cbegin(), student_list_.cend(), [surname](const auto &s){ return s.getSurname() == surname;});
// }

// Student University::SearchByPesel(const std::string &pesel)
// {
//         return *std::find_if(student_list_.cbegin(), student_list_.cend(), [pesel](const auto &s){ return s.getPesel() == pesel;});
// }

// void University::SortByPesel()
// {
//     std::sort(student_list_.begin(), student_list_.end(), [] (const Student &lhs, const Student &rhs)
//     {
//         const std::string &lhs_pesel = lhs.getPesel();
//         const std::string &rhs_pesel = rhs.getPesel();

//         return lhs_pesel < rhs_pesel;
//     });
// }

// void University::RemoveByIndex(const size_t &index)
// {
  
//              auto new_end = std::remove_if(student_list_.begin(), student_list_.end(),
//                                 [&index](const Student& st)
//                                 { return st.getIndex() == index; });

//             student_list_.erase(new_end, student_list_.end());    
// }



// std::vector<Student> University::Test(std::vector<Student>)
// {
//     return student_list_;
// }
// void University::SaveToFile()
// {
  
// std::ofstream MyFile("filename.txt");
// MyFile <<"Name\tSurname\tAddress\tIndex\tPesel\tGender\n";
//    for(auto & val : student_list_)
//     {
//         MyFile << val.getName()<<" ";
//         MyFile << val.getSurname()<<" ";
//         MyFile << val.getAddress()<<" ";
//         MyFile << val.getIndex()<<" ";
//         MyFile << val.getPesel()<<" ";
//         MyFile << val.getGender()<<"\n";
//     }
//     std::cout<<"File saved successfully! In you folder with program files called filename.txt!\n";
//   MyFile.close();

// }
// void University::ExitProgram(){
//     std::cout<<"End of program, Goodbye ! \n";
//     exit(0);
// }

// std::vector<Student> University::returnStudentList()
// {
//     return student_list_;
// }
