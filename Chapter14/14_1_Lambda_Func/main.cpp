/*
Lambda Function Signature:

[capture_clause](parameters) -> return_type {
    // Function body
}

    - capture_clause captures variables from the enclosing scope. It can be empty, capture specific variables by reference (&) or by value (=), or capture all variables by reference (&) or by value (=).
    - parameters are the input parameters of the lambda function.
    - return_type is the data type that the lambda function returns.
    - The function body contains the actual code of the lambda function.

*/

#include <iostream>

int main() {
    // Define and use a lambda function
    auto add = [](int a, int b) -> int {
        return a + b;
    };
    
    int result = add(5, 3);
    std::cout << "Result: " << result << std::endl;  // Output: Result: 8

    // Call lambda function directly after definition
    [](int n) -> int {
        int mul {1};
        for (n; n>0; n--){
            mul = mul * n;
        }
        std::cout << "The factorial is: " << mul << std::endl;
        return mul;
    }(5);

    // Store the 'return' when called directly
    auto return_store = [](int n) -> int {
                            int mul {1};
                            for (n; n>0; n--){
                                mul = mul * n;
                            }
                            return mul;
                        }(5);
    std::cout << "The factorial is: " << return_store << std::endl;

    // Print result directly
    std::cout << "addition of double: " << [](double a, double b) -> double{ 
                                                return (a+b);
                                                }(8.22, 21.30) << std::endl;

    return 0;
}
