#pragma once

#include "Ifactory.h"
#include "employee.h"
#include "employee_randomizer.h"

class EmployeeFactory : public IFactory
{
public:
   Employee* Create() override{

        Employee *employee = new Employee(EmployeeRandomizer::CreateId(), EmployeeRandomizer::CreateSalary());
        return employee;
   }
};