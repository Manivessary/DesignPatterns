#pragma once

#include <memory>
#include <string>

#include "car.h"

class IPrototypeFactory
{
public:
    virtual std::unique_ptr<Car> CreateRaceCar(std::string color) = 0;

};

