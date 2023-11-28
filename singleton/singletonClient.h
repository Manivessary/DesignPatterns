#pragma once

#include "singleton.h"
#include "lazysingleton.h"

//int LazySingleton::counter = 0;
//int LazySingleton::counter_get = 0;
//LazySingleton *LazySingleton::instance = 0;
//int Singleton::counter = 0;
//int Singleton::counter_get = 0;
//Singleton *Singleton::instance = 0;

void SingletonClient()
{
    Singleton *s = Singleton::GetInstance();
    s->PrintCounter();
}

void LazySingletonClient()
{
    LazySingleton *s = LazySingleton::GetInstance();
    s->PrintCounter();

    LazySingleton *s2 = LazySingleton::GetInstance();
    s2->PrintCounter();
}