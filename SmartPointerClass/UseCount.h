#ifndef USECOUNT_H
#define USECOUNT_H

class UseCount
{
    public:
     
    void increment();

    int decrement();

    int get_use_count();

    //~UseCount();



    private:

    int count{};

};

#include "UseCount.cpp"
#endif 
