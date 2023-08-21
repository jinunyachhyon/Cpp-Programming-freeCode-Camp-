#include <iostream>

#include "factorial.h" // Preprocessor -- copy all code from that header file to main file
#include "incr_mult.h"

int main(){
    int n;
    std::cout << "Enter n: ";
    std::cin >> n;

    int factorial = fact(n);  // Func call
    std::cout << "Factorial of " << n << " is: " << factorial << std::endl;

    int a {21};
    int b {8};
    int mul = increase_mul(a,b);
    std::cout << "Increase Multiplication: " << mul << std::endl;

    return 0;
}

// **Declaration should be in header file!! (NO OTHER FILE)
// **Definition can be in header or cpp file!! (ANY FILE)