#pragma once

#include "Ifactory.h"
#include "employee_randomizer.h"
#include "manager.h"

class ManagerFactory : public IFactory
{
private:
    /* data */
public:
    Employee *Create() override
    {

        Employee *employee = new Manager(
            EmployeeRandomizer::CreateId(),
            EmployeeRandomizer::CreateSalary(),
            EmployeeRandomizer::CreateDepartmant()
            );

        return employee;
    }
};
