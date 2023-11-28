#pragma once

class Manager : public Employee
{
public:
    Manager(int id, int salary, int depertmant_id): Employee(id, salary) ,depertmant_id_(depertmant_id){}
    void PrintInfo() override {
        std::cout << "Manager ->"
        << " ID: " << GetId()
        << " Salary: " << GetSalary()
        << " Departmant: " << this->depertmant_id_ 
        <<std::endl;
    }
private:
    int depertmant_id_;
};