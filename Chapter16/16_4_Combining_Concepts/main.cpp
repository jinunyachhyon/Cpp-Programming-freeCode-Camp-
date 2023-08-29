#include <iostream>
#include <concepts>


template <typename T>
concept TinyType = requires ( T t){
	sizeof(T) <=4; // Simple requirement
	requires sizeof(T) <= 4; // Nested requirement
};


template <typename T>
//requires std::integral<T> || std::floating_point<T> // OR operator
//requires std::integral<T> && TinyType<T> // AND operator
requires std::integral<T> && requires ( T t){
	sizeof(T) <=4; // Simple requirement
	requires sizeof(T) <= 4; // Nested requirement
}
T add(T a, T b){
    return a + b;
}



int main(){

    int x{7};
    int y{5};

    add(x,y); // Satisfies both the concepts 

   
    return 0;
}