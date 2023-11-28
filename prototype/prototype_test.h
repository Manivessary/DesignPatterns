#include <memory>
#include <vector>

#include "car.h"
#include "race_car.h"
#include "prototypeFactory.h"

namespace prototype
{
    void Test()
    {
        std::vector<std::unique_ptr<Car>> cars;

        const auto prototype = std::make_unique<RaceCar>("Awesome Car", "", 140);

        auto red_car = prototype->Clone();
        red_car->SetColor("red");

        cars.emplace_back(std::move(red_car));

        auto blue_car = prototype->Clone();
        blue_car->SetColor("red");

        cars.emplace_back(std::move(blue_car));


        std::vector<std::unique_ptr<Car>> cars_with_factory;
        //PrototypeFactory *prototype_factory = new PrototypeFactory();
        const auto prototpe_factory = std::make_unique<PrototypeFactory>();

        auto red_car_fac = prototpe_factory->CreateRaceCar("red");
        cars_with_factory.emplace_back(std::move(red_car_fac));

        auto blue_car_fac = prototpe_factory->CreateRaceCar("blue");
        cars_with_factory.emplace_back(std::move(blue_car_fac));

        for(const std::unique_ptr<Car>& car : cars_with_factory)
        {
            car->PrintColor();
        }
    }
};