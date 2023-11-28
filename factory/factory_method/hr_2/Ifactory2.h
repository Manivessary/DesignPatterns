#pragma once
#include "employee2.h"

class IFactory2
{
public:
   virtual Employee2* Create() = 0;
};
