#include <iostream>

int main(){
    // while loop: (condition) --> loop body --> increment/decrement
    int i {0};
    while (i < 10){
        std::cout << "I love C++" << std::endl;
        i++;
    }

    // Multiplying odd values from 1-10
    i = 1;
    int mul = 1;
    while (i <=10) {
        if (!(i%2 == 0)){
            mul = mul * i;
        }
        else {
            mul = mul * 1;
        }
        i++;
    }
    std::cout << "Multiplication of odd from 1-10: " << mul << std::endl;

    // Factorial calc
    int a {};
    std::cout << "Enter a number to calc factorial: " ;
    std::cin >> a;

    int fact {1};
    while (a>0){
        fact = fact * a;
        a--;
    }
    std::cout << "Factorial is: " << fact << std::endl;

    return 0;
}