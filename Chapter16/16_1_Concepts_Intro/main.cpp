// Concepts -- mechanism to place constraints on your template type parameters

/*
Syntax1:
template <typename T>
requires std::integral <T> // < --- MAIN
T add (T a, T b){
    return a+b;
}

Syntax2: 
template <std::integral T> // < --- MAIN
T add( T a, T b){
    return a + b;
}

Syntax3:
template <typename T>
T add( T a, T b) requires std::integral<T>{ // < --- MAIN
    return a + b;
}

Syntax 4:
auto add(std::integral auto a , std::integral auto b){ // < --- MAIN
    return a + b;
}
*/

#include <iostream>
#include <concepts>

template <typename T>
requires std::integral <T>
T add (T a, T b){
    return a+b;
}

template <std::integral T>
T mul (T a, T b){
    return a*b;
}

template <typename T>
T sub( T a, T b) requires std::integral<T>{
    return a - b;
}

auto addd(std::integral auto a , std::integral auto b){
    return a + b;
}

int main(){
    char a {11};
    char b {20};
    auto r_a = add(a,b);
    std::cout << "result_a: " << static_cast<int>(r_a) << std::endl;

    int c {45};
    int d {788};
    auto r_b = mul(c,d);
    std::cout << "result_b: " << r_b << std::endl;

    int g {45};
    int h {78};
    auto r_d = sub(g,h);
    std::cout << "result_d: " << r_d << std::endl;

    int i {1};
    int j {1};
    auto r_e = addd(i,j);
    std::cout << "result_e: " << r_e << std::endl;

    // double e {78.56};
    // double f {6.34};
    // auto r_c = add(e,f); // Error -- doouble is not integral type (REQUIRES INTEGRAL TYPE)
    // std::cout << "result_c: " << r_c << std::endl;

    return 0;
}