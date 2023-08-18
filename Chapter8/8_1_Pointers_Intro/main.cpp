#include <iostream>

int main(){
    
    //Declare and initialize pointer
    int* p_number {}; // Will initialize with null pointer
    double*  p_fractional_number{};

    //Explicitly initialize with nullptr
    int* p_number1{nullptr};
    int* p_fractional_number1{nullptr};

    std::cout << "p_number : " << p_number << std::endl; //0
    std::cout << "p_fractional_number : " << p_fractional_number << std::endl; //0

    //Initializing pointers and assigning them data
    //We know that pointers store addresses of variables
    int int_var {43};
    int *p_int{&int_var};// The address of operator (&);
    
    std::cout << "Int var : " << int_var << std::endl;
    std::cout << "p_int (Address in memory)  : " << p_int << std::endl;

    //You can also change the address stored in a pointer any time
    int int_var1 {65};
    p_int = &int_var1; // Assign a different address to the pointer
    std::cout << "p_int (with different address)  : " << p_int << std::endl;


    //Can't cross assign between pointers of different types
    int *p_int1{nullptr};
    double double_var{33};

    //p_int = &double_var; // Compiler error


    //Dereferencing a pointer : 
    int* p_int2 {nullptr};
    int int_data {56};
    p_int2 = &int_data;

    std::cout << "address : " << p_int2 << std::endl;
    std::cout << "value : " << *p_int2 << std::endl; // Dereferencing a pointer


    return 0;
}