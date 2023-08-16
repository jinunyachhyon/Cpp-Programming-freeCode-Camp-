#include <iostream>

int main(){
    signed int value1 {10};
    signed int value2 {-20}; // can store -ve and +ve

    unsigned int value3 {70}; // can store only +ve

    std::cout << "sizeof(value1)" << sizeof(value1) << std::endl;
    std::cout << "sizeof(value2)" << sizeof(value2) << std::endl;
    std::cout << "sizeof(value3)" << sizeof(value3) << std::endl;

    return 0;
}