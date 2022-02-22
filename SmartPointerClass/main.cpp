#include "SmartPointer.h"
#include <string>

int main(){
    SmartPointer<int> sp_int;
    SmartPointer<int> sp_int_1{sp_int};
    std::cout << "Use count of sp_int: " << sp_int.use_count() << std::endl;
    // int* int_pointer;
    // *int_pointer = 1;
    SmartPointer<int> sp_int_3((new int(5)));
    //sp_int_3 = sp_int;
    SmartPointer<std::string> sp_int_4((new std::string("Hola!")));

    //Change Values
    std::cout << "Content of sp_int_4 is " << sp_int_4.getValue() <<std::endl;
    sp_int_4.setValue("Hello");
    std::cout << "Content of sp_int_4 is " << sp_int_4.getValue() <<std::endl;
    
    std::cout << "Content of sp_int_3 is " << sp_int_3.getValue() <<std::endl;
    std::cout <<  "Use count of sp_int_3: " << sp_int_3.use_count() <<std::endl;

}