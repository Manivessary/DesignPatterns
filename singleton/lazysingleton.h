#pragma once
#include <iostream>

class LazySingleton
{
private:
    static LazySingleton *instance;
    LazySingleton(){}

public:
// delete copy constructor
    LazySingleton(const LazySingleton &obj) = delete;
    ~LazySingleton();

public:
    static LazySingleton *GetInstance();
    static int counter;
    static int counter_get;
    void PrintCounter();
};


int LazySingleton::counter = 0;
int LazySingleton::counter_get = 0;
LazySingleton *LazySingleton::instance = 0;

LazySingleton *LazySingleton::GetInstance()
{
    counter_get++;

    if (instance == NULL)
    {
        instance = new LazySingleton();
    }
    return instance;
}

void LazySingleton::PrintCounter()
{
    std::cout << "Lazy Singleton created: " << counter << std::endl;
    std::cout << "Lazy Singleton called: " << counter_get << std::endl;

}
