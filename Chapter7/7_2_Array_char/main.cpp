#include <iostream>

int main(){
    // Character array: char array_name[size] {'a', 'b', 'c', 'd', 'e', '\0'}; --> '\0' is the null termination

    // Declare array
    char vowels[5] {'a', 'e', 'i', 'o', 'u'};

    // Print array - using a for loop
    std::cout << "The vowels are: " << std::endl;
    for (auto c : vowels){
        std::cout << c << std::endl;
    }
    std::cout << std::endl;

    // Print all array directly
    std::cout << "The vowels are: " << vowels << std::endl; // no null termination might add garbage value

    // Initialize an array to say hello
    char hello[] {'h', 'e', 'l', 'l', 'o', '\0'}; // '\0' is the null termination
    std::cout << "The hello array is: " << hello << std::endl;


    // String literal
    char hello2[] {"hello"}; // '\0' is automatically added
    std::cout << "The hello2 array is: " << hello2 << std::endl;

    return 0;
}