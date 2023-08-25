#include <iostream>

template <typename T> 
T maximum (T &a, T &b){
    std::cout << "Address of 'a' in template: " << &a << std::endl;
    std::cout << "Value of 'a': " << a << std::endl;
    a = a - 7;
    std::cout << "Value of 'a': " << a << std::endl;
    return (a > b)? a:b;
}

int main(){
    int a {9};
    int b {6};

    std::cout << "Address of 'a' in main: " << &a << std::endl;
    std::cout << "Value of 'a': " << a << std::endl;
    auto result = maximum(a,b);
    std::cout << "Value of 'a': " << a << std::endl;
    std::cout << "Maximum: " << result << std::endl;

    return 0;
}