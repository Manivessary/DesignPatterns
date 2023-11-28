#pragma once
#include "employee.h"

class IFactory
{
public:
   virtual Employee* Create() = 0;
};
