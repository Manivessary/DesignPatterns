#pragma once
#include <iostream>
#include <string>

class Employee2
{
public:
    Employee2() = default;
    Employee2(int id, int salary, std::string name) : id_(id), salary_(salary), name_(name) {}
    virtual void PrintInfo(){
        std::cout << "Employee ->" << " ID: " << this->id_ << " Salary: " << this->salary_ << " Name: " << this->name_ << std::endl;
    }

    int GetId(){return this->id_;}
    int GetSalary(){return this->salary_;}
    std::string GetName(){return this->name_;}


private:
    int id_;
    int salary_;
    std::string name_;
};
