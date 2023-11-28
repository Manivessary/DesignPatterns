#pragma once
#include "employee2.h"

class IEmployeeFactory2
{
public:
   virtual Employee2* Create(std::string name) = 0;
};
