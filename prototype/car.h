#pragma once

#include <string>
#include <memory>

class Car
{
public:
    Car(std::string model, std::string color) 
        : model_(std::move(model)),
        color_(std::move(color))
    
    {}

    virtual std::unique_ptr<Car> Clone() const = 0;
    void SetColor(std::string new_color)
    {
        color_ = std::move(new_color);
    }

    void PrintColor(){
        printf("Color of the car: %s\n", color_.c_str());
    }
private:
    std::string model_;
    std::string color_;
};




