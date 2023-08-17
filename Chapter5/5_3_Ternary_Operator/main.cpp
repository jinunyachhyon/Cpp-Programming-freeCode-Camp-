#include <iostream>

int main(){
    // Ternary operators:
    // result = (condition) ? option1 : option2 ; 
    // if condition satisfies result = option1, else result = option2

    int max {};

    int a {};
    int b {};

    std::cout << "Enter value of 'a': ";
    std::cin >> a;

    std::cout << "Enter value of 'b': ";
    std::cin >> b;

    max = (a>b) ? a:b;
    std::cout << "Max value: " << max << std::endl;

    return 0;
}