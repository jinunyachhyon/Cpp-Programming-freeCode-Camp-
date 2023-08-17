#include <iostream>

int main(){
    // Do while loop: do {statement} --> while (condition == True)
    int i {0};
    do{
        std::cout << "I love C++" << std::endl;
        i++; 
    } while (i<10);

    // calculate factorial of given number
    int a {};
    std::cout << "Enter a number to calc factorial: ";
    std::cin >> a;

    int fact = 1;
    do{
        if (a==0){
            fact = 1; // factorial of 0 is 1 
        }
        else{
            fact = fact * a;
            a--;
        }
    } while (a>0);
    std::cout << "Factorial is: " << fact << std::endl;

    return 0;
}