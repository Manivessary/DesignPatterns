#pragma once

#include "manager_factory2_interface.h"
#include "employee_randomizer2.h"
#include "manager2.h"

class ManagerFactory2 : public IManagerFactory2
{
private:
    /* data */
public:
    Employee2 *Create(std::string name, std::string surname) override
    {

        Employee2 *employee = new Manager2(
            EmployeeRandomizer2::CreateId(),
            EmployeeRandomizer2::CreateSalary(),
            EmployeeRandomizer2::CreateDepartmant(), 
            name, 
            surname
            );

        return employee;
    }
};