/*
Requires clause can take in four kinds of requirements:
1. Simple requirements -- Expressions only checked for valid syntax
2. Nested requirements -- Checks if the expression is true
3. Compound requirements
4. Type requirements
*/

#include <iostream>
#include <concepts>

template <typename T>
concept TinyType = requires (T t){
    sizeof(T) <= 4; // Simple requirement : Only enforces syntax
    requires sizeof(T) <= 4; // Nested requirements
};

TinyType auto add( TinyType auto a, TinyType auto b){
    return a+b;
}


//Compound requirement
template <typename T>
concept Addable = requires (T a, T b) {
	//noexcept is optional
	{a + b} -> std::convertible_to<int>; //Compound requirement
	//Checks if a + b is valid syntax, doesn't throw expetions(optional) , and the result is convertible to int(optional)
};


Addable auto adder ( Addable auto a, Addable auto b){
    return a + b;
}


int main(){

    double x{67};
    double y{56};
    // auto res = add(x,y); // Error: because char is 8 byte but nested_req FALSE
    // std::cout << "TinyType: " << res << std::endl;

    int a{3};
    int b{4};
    auto res = add(a,b);
    std::cout << "TinyType: " << res << std::endl;

    //std::string x1{"Hello"};
    //std::string y1{"World"};

    //auto s = adder(x1, y1); // Error: because string is not convertable to int

    auto result  = adder(x,y);
    std::cout << "result : " << result << std::endl;
    std::cout << "sizeof(result) : " << sizeof(result) << std::endl;

    return 0;
}