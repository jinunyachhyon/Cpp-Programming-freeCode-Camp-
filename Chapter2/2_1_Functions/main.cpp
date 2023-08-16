#include <iostream>

// Function
int sumation(int num1, int num2){
    int sum = num1 + num2;
    return sum;
}

// Multiply function
int multiplication(int num1, int num2){
    int mul = num1 * num2;
    return mul;
}

int main(){
    
    int first_number {3}; //statement
    int second_number {5};

    int number1;
    int number2;

    std::cout << "Enter a  number" << std::endl;
    // Error message
    std::cerr << "Need to enter a number" <<std::endl;
    std::cin >> number1;
    std::cout << "Enter number is: " << number1 << std::endl;

    std::cout << "Enter second number" << std::endl;
    std::cerr << "You have to enter a number!" << std::endl;
    std::cin >> number2;
    std::cout << "Another entered number is: " << number2 << std::endl;

    std::cout << "First number: " << first_number << std::endl;
    std::cout << "Second number: " << second_number << std::endl;

    int sum = sumation(first_number, second_number);
    std::cout << "Sum of first and second: " << sum << std::endl;

    int mul = multiplication(first_number, second_number);
    std::cout << "Multiple of first and second: " << mul << std::endl;

    int sum2 = sumation(number1, number2);
    std::cout << "Sum of num1 and num2: " << sum2 << std::endl;

    int mul2 = multiplication(number1, number2);
    std::cout << "Mul od num1 and num2: " << mul2 << std::endl;

    // Log message
    std::clog << "All maths part completed!!" << std::endl;

    // Get name and age in each input
    std::string f_name;
    int age;

    std::cout << "Enter your first name and age" << std::endl;
    std::cin >> f_name >> age;
    std::cout << "Hey, " << f_name << " you are " << age << " years old!" << std::endl;

    return 0;
}