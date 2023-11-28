#pragma once
#include <cstdlib>

class EmployeeRandomizer
{
public:
    static int CreateId()
    {
        return std::rand() % 100;
    }

    static int CreateSalary()
    {
        return std::rand() % 10000;
    }
    static int CreateDepartmant()
    {
        return std::rand() % 10;
    }
};
