#pragma once
#include <string>

class Manager2 : public Employee2
{
public:
    Manager2(int id, int salary, int depertmant_id, std::string name, std::string surname):
     Employee2(id, salary, name) ,depertmant_id_(depertmant_id), surname_(surname){}

    void PrintInfo() override {
        std::cout << "Manager ->"
        << " ID: " << GetId()
        << " Salary: " << GetSalary()
        << " Departmant: " << this->depertmant_id_ 
        << "Name : " << GetName() 
        << "Surname: " << this->surname_
        <<std::endl;
    }
private:
    int depertmant_id_;
    std::string surname_;
};