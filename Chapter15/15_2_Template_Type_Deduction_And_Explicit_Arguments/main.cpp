#include <iostream>
#include <string>

// Template
template <typename T> 
T maximum (T a, T b){
    return (a > b) ? a : b;
}

int main(){
    int a = 4;
    int b = 0;

    double c = 9.53;
    double d = 7.36;

    std::string e = "Hello";
    std::string f = "Everyone";

    auto r = maximum(a,b); // Automatically deduce int type
    std::cout << r << std::endl;
    auto rr = maximum(c,d); // Automatically deduce double type
    std::cout << rr << std::endl;
    auto rrr = maximum(e,f); // Automatically deduce string type
    std::cout << rrr << std::endl; // output: rrr = "Hello" because lexographically, H comes after E

    // Explicit Arguments
    auto r1 = maximum <double> (a,c); // Explicitly deduce double type
                                    // Implicit change of data type of first argument from int to double
    std::cout << r1 << std::endl;


    auto r2 = maximum <int> (b,d); // Explicitly deduce int type
                                // Implicit change of data type of second argument from double to int
    std::cout << r2 << std::endl;


    // maximum <double> (e, b); // Error because cannot implicitly change datatype from string to double

    return 0;
}