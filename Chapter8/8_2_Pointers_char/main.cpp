#include <iostream>


int main(){

    // Declaring pointer to char
    char *ptr_char {nullptr};

    char char_var {'A'};
    ptr_char = &char_var;
    std::cout << "Value in ptr_chr: " << *ptr_char << std::endl; 
    std::cout << "Address: " << ptr_char << std::endl;

    char char_var1 {'B'};
    ptr_char = &char_var1;
    std::cout << "Value in ptr_chr: " << *ptr_char << std::endl;
    std::cout << "Address: " << ptr_char << std::endl;

    const char* message {"Hello World!"}; // Adv: can store string as well as char
    std::cout << "message : " << message << std::endl; // Prints string

    std::cout << "*message : " << *message << std::endl; // Prints first char

    //Allow users to modify the string
    char message1[] {"Hello World!"};
    message1[0] = 'B';
    std::cout << "message1 : " << message1 << std::endl;

    return 0;
}