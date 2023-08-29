/*
Different ways to build concepts:

template <typename T>
concept MyIntegral = std::is_integral_v <T>;

template <typename T>
concept Multipliable = requires(T a, T b){
    a * b; 
};

template <typename T>
concept Incrementable = requires (T a){
    a+ = 1;
    ++a;
    a++;
};
*/

#include <iostream>
#include <type_traits>
#include <concepts>

// Syntax 1
template <typename T>
concept MyIntegral = std::is_integral_v <T>;

template <typename T>
requires MyIntegral <T>
T addition (T a, T b){
    std::cout << "a+b: " << a+b << std::endl;
    return a+b;
};


// Syntax 2
template <typename T>
concept MyIntegral1 = std::is_integral_v <T>;

template <typename T>
T subtract (T a, T b) requires MyIntegral1 <T> {
    std::cout << "a-b: " << a-b << std::endl;
    return a-b;
};


// Syntax 3
template <typename T>
concept Multipliable =  requires(T a, T b) {
	a * b; // Just makes sure the syntax is valid
};

template <typename T>
requires Multipliable <T>
T divide (T a, T b){
    std::cout << "a/b: " << a/b << std::endl;
    return a/b;
};


// Syntax 3 -- with multiple lines of condition in concepts
template <typename T>
concept Incrementable = requires (T a) {
	a+=1;
	++a;
	a++;
};

template <typename T>
requires Incrementable<T>
T adder (T a, T b){
    std::cout << "a+b: " << a+b << std::endl;
    return a + b;
}


int main(){
    int x{9};
    int y{10};

    std::string a{"Hwiii"};
    std::string b{"Black"};

    double x1{6};
    double y1{7};

    addition(x,y);

    subtract(y,x);
    
    divide(x,y); 
    // divide(a,b); // Unsupported by Multipliable concept [Error: note: the required expression ‘(a * b)’ is invalid]

    adder(x1, y1);

    return 0;
}

