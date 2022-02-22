#include "SmartPointer.h"

template<typename T>
inline
SmartPointer<T>::SmartPointer() : pointer(0), count(0) {
    count = new UseCount();
    count->increment();
}

template<typename T>
inline
SmartPointer<T>::SmartPointer(T* value): pointer(value), count(0){
    count = new UseCount();
    count->increment();
}

template<typename T>
inline
SmartPointer<T>::SmartPointer(const SmartPointer& sp): pointer(sp.pointer), count(sp.count) {
    count->increment();
}

template<typename T>
inline
SmartPointer<T>::~SmartPointer(){
    if (count->decrement() == 0){
        delete pointer;
        delete count;
    }
    std::cout << "Destructor called on SP" << std::endl;
}

template<typename T>
inline
SmartPointer<T> &SmartPointer<T>::operator=(const SmartPointer &sp){
    std::cout << "Copy assignment called on SP" << std::endl;
    if (this != &sp){
        pointer = sp.pointer;
        count = sp.count;
        count->increment();
    }
    return *this;
}

template<typename T>
inline
auto SmartPointer<T>::getValue(){
    return *pointer;
}

template<typename T>
inline
int SmartPointer<T>::use_count(){
    return count->get_use_count();
}

template<typename T>
inline
void SmartPointer<T>::setValue(T value){
    *pointer = value;
}

/*
SmartPointer(SmartPointer &&) noexcept;

SmartPointer &operator=(SmartPointer &&) noexcept;

    auto getValue();

    int use_count();

use_count();

set(T elem); */

