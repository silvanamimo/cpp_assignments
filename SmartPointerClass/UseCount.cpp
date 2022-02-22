#include <iostream>
#include "UseCount.h"

void UseCount::increment(){
    count++;
    std::cout << "Incrementing counter" << std::endl;
}


int UseCount::decrement(){
    
    std::cout << "Decrementing counter" << std::endl;
    return --count;
}

int UseCount::get_use_count(){
    return count;
}

