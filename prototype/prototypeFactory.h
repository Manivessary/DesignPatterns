#pragma once

#include <memory>
#include <string>

#include "car.h"
#include "race_car.h"
#include "prototypeFactoryInterface.h"

class PrototypeFactory : public IPrototypeFactory
{
public:
    virtual std::unique_ptr<Car> CreateRaceCar(std::string color) override
    {
        auto race_car =  race_car_prototype->Clone();
        race_car->SetColor(std::move(color));
        return race_car;
    }

private:
    const std::unique_ptr<Car> race_car_prototype = std::make_unique<RaceCar>("Awesome Car", "red", 140);
};


