#ifndef SMARTPOINTER_H
#define SMARTPOINTER_H

#include "UseCount.h"

template<typename T>
class SmartPointer {
    public:
    SmartPointer();

    SmartPointer(const SmartPointer &sp); 

    SmartPointer(T* value);
    
    ~SmartPointer();

    SmartPointer& operator=(const SmartPointer &);

    SmartPointer(SmartPointer &&) noexcept;

    SmartPointer &operator=(SmartPointer &&) noexcept;

    T& operator*();

    T* operator->();

    auto getValue();

    int use_count();

    void setValue(T value);

    private:
    T* pointer;
    UseCount* count;
};

#include "SmartPointer.cpp"
#endif