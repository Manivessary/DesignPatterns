#pragma once
#include <iostream>

class Employee
{
public:
    Employee() = default;
    Employee(int id, int salary) : id_(id), salary_(salary) {}
    virtual void PrintInfo(){
        std::cout << "Employee ->" << " ID: " << this->id_ << " Salary: " << this->salary_ << std::endl;
    }

    int GetId(){return this->id_;}
    int GetSalary(){return this->salary_;}

private:
    int id_;
    int salary_;
};
