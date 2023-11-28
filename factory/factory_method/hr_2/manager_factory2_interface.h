#pragma once

#include <string>

#include "employee2.h"

class IManagerFactory2
{
public:
   virtual Employee2* Create(std::string name, std::string surname) = 0;
};
