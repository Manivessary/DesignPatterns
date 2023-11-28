#pragma once

#include <string>

#include "car.h"

class RaceCar :public Car
{
public:
    RaceCar(std::string model, std::string color, int max_speed) 
        : Car(std::move(model), std::move(color)) ,
        max_speed_(max_speed)
    {}
    virtual std::unique_ptr<Car> Clone() const override
    {
        return std::make_unique<RaceCar>(*this);
    }

private:
    int max_speed_;
};