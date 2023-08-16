#include <iostream>

int main(){
    // Data input with spaces
    std::string full_name;
    int age2;

    std::cout << "Enter full name and age" << std::endl;
    std::getline(std::cin, full_name);
    std::cin >> age2;
    std::cout << "Hey, " << full_name << " you are " << age2 << " years old!" << std::endl;

    return 0;
}