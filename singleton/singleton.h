#pragma once
#include <iostream>



class Singleton
{
private:
    static Singleton *instance;
    Singleton(){}

public:
// delete copy constructor
    Singleton(const Singleton &obj) = delete;
    ~Singleton();

public:
    static Singleton *GetInstance();
    static int counter;
    static int counter_get;
    void PrintCounter();
};

int Singleton::counter = 0;
int Singleton::counter_get = 0;
Singleton *Singleton::instance = new Singleton();

Singleton *Singleton::GetInstance()
{
    counter_get++;
    return instance;
}

void Singleton::PrintCounter()
{
    std::cout << "Singleton created: " << counter << std::endl;
    std::cout << "Singleton called: " << counter_get << std::endl;
    
}
