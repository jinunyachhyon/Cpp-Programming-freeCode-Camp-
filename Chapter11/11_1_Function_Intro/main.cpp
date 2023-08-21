#include <iostream>

// Use function to add fibonacci series

// Function declaration
int fibbonacci(int n);

int main(){
    int n {};
    std::cout << "Enter n" << std::endl;
    std::cin >> n;

    int value = fibbonacci(n); // function call
    std::cout << n << "th value in the series: " << value << std::endl;

    return 0;
}

// Function definition
int fibbonacci(int n){
    int value = 0;
    int sum = 1; // because last loop starts from 3rd place in the series
    int ori_n = n;

    int a = 0; // first value of fibonnaci series
    int b = 1; // second value of fibonnaci series
    if (n==0){
        std::cout << "No valid series value" << std::endl;
    }
    else if (n==1){
        value = a;
        sum = a;
    }
    else if (n==2){
        value = b;
        sum = b;
    }
    else {
        for (n; n-2 > 0; n--){
            value = a+b;
            sum = sum + value;
            a = b;
            b = value;
        }
    }
    std::cout << "Sum of " << ori_n << "th in the series: " << sum << std::endl;

    return value;
}