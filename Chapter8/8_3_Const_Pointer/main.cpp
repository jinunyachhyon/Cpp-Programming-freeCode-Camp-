#include <iostream>

int main(){
    std::cout << "Pointer is contant, pointed to value can change : " << std::endl;
    int number7 {982};
    
    int * const p_number7 { &number7};
    
    std::cout << "p_number7 :" << p_number7 << std::endl;
    std::cout << "*p_number7 : " << *p_number7 << std::endl;

    std::cout << "Changing value pointed to through p_number7 pointer : " << std::endl;
    *p_number7 = 456;
    std::cout << "The value pointed to by p_number7 now is : " << *p_number7 << std::endl;
    
    int number8 {2928};
    std::cout << "Changing the address where p_number7 is pointing (Compile Error)." << std::endl;
    // p_number7 = &number8;

    return 0;
}