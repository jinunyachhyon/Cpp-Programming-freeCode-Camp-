#include <iostream>
#include <string>

// Function Template - Avoid code repetition

// Function Template syntax:
/*
template <typename T>
(Function definition){
    Function Body
}
*/

template <typename T> // T --> DataType 'T'
T maximum(T a , T b){
    return (a > b)? a : b; 
}


int main(){

    int x{5};
    int y{3};

    int* p_x {&x};
    int* p_y{&y};

    std::cout << "Address of x: " << p_x << std::endl;
    std::cout << "Address of y: " << p_y << std::endl;

    // Find max address
    auto result = maximum(p_x,p_y);
    std::cout << "maximum address : " << result << " and its value is: " << *result << std::endl;

    // Find max value
    auto result1 = maximum(x,y);
    std::cout << "maximum value : " << result1 << std::endl;
   
    return 0;
}