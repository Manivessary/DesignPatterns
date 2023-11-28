#pragma once

#include <string>

#include "employee_factory2_interface.h"
#include "employee2.h"
#include "employee_randomizer2.h"

class EmployeeFactory2 : public IEmployeeFactory2
{
public:
   Employee2* Create(std::string name) override{

        Employee2 *employee = new Employee2(EmployeeRandomizer2::CreateId(), EmployeeRandomizer2::CreateSalary(), name);
        return employee;
   }
};