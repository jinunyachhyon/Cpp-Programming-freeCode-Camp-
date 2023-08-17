#include <iostream>

int main(){
    // For loop (starting point, condition, increment/decrement)
    int i {0};
    for (i; i < 10; i++){
        // Loop body
        std::cout << "i = " << i;
        std::cout << "  I love c++" << std::endl;
    };

    // Adding from 0-10
    i = 0;
    int sum {0};
    for (i; i<=10; i++){
        sum = sum + i;
    };
    std::cout << "Sum from 0-10: " << sum << std::endl;

    // Multiplication of all even numbers from 1-10
    i = 1;
    int mul = 1;
    for (i; i<=10; i++){
        if (i%2 == 0){
            mul = mul * i;
        }
        else {
            mul = mul * 1;
        }
    }
    std::cout << "MUltiplication of even numbers from 1-10: " << mul << std::endl;

    // Factorial calc
    int a {};
    std::cout << "Enter the number to calc factorial: ";
    std::cin >> a;

    int fact {1};
    for (a; a>0; a--){
        fact = fact * a;
    }
    std::cout << "Factorial is: " << fact << std::endl;

    return 0;
}