// Capture lists: capture variables from the surrounding scope and make them available for use within the lambda function. 

#include <iostream>

int main(){
    int a = 3, b = 7;
    auto lambda = [a, b]() { // capture a,b from outside the function to make it use within the scope of the function
        std::cout << a + b << std::endl;
    };
    lambda();


    // Capture by value
    double c = 0.666;
    auto capture_value = [c]() {
            std::cout << "Address:" << &c << std::endl;
            std::cout << "Captured value of c: " << c << std::endl;
            // c = c + 3.333; // Error: Attempting to modify a read-only variable 
            // ** capturing c by value, it becomes a copy of the original variable and is considered a read-only variable within the lambda function
            std::cout << "Value of c in the lambda function: " << c << std::endl;
            };

    capture_value(); // Output: 0.666

    c = c + 3.333; // Change value of c
    std::cout << "Address:" << &c << std::endl;
    std::cout << "Value of c outside the lambda function: " << c << std::endl;

    capture_value(); // Output: 0.666, since it's pass by value


    std::cout << std::endl;


    // Solution to Error: Attempting to modify a read-only variable --> mutable
    double d = 8.28;
    auto capture_mutable = [d]() mutable {
            std::cout << "Address:" << &d << std::endl;
            std::cout << "Captured value of d: " << d << std::endl;
            d = d + 3.333; // No Error: Attempting to modify a read-only variable 
            std::cout << "Value of d in the lambda function: " << d << std::endl; 
            };

    capture_mutable(); 

    d = d + 4.444; // Change value of d
    std::cout << "Address:" << &d << std::endl;
    std::cout << "Value of d outside the lambda function: " << d << std::endl; 

    capture_mutable(); // **The previous value of d remains in the lambda function
    std::cout << std::endl;


    // Capture by reference
    int e = 8;
    auto capture_ref = [&e]() {
            std::cout << "Address:" << &e << std::endl;
            std::cout << "Captured value of e: " << e << std::endl;
            e = e + 3; // No Error: Attempting to modify a read-only variable 
            std::cout << "Value of e in the lambda function: " << e << std::endl; 
            };

    capture_ref(); 

    e = e + 4; // Change value of e
    std::cout << "Address:" << &e << std::endl;
    std::cout << "Value of e outside the lambda function: " << e << std::endl; 

    capture_ref(); 

    return 0;
}