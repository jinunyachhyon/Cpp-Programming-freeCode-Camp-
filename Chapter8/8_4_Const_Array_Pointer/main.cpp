#include <iostream>

// POINTER IS SPECIAL FOR THE CHAR 
// Poniter in char allows --> string literal

int main(){

    const  char * const   students [] {
        "Daniel Gray",
        "Tuna Philbe",
        "The Rock",
        "Kumar Singh",
        "Sam Ali",
        "Dave Mahoro"
    };
    
    std::cout << *students[0] <<std::endl; // D (string --> separate into characters --> so pointer(address) of students[0] has only one char -> D)
    std::cout << students[0] <<std::endl; // Daniel Gray (Different for char in pointers)
    std::cout << &students[0] <<std::endl; // Gives address of students[0] 
    std::cout << std::endl;

    // Comparing with integer pointers
    int *numbers {};
    int num {3};
    numbers = &num;
    std::cout << numbers <<std::endl; // pointer --> address
    std::cout << num <<std::endl; // int --> value
    std::cout << &num << std::endl; // int --> address
    std::cout << &numbers << std::endl; // pointer --> address
    std::cout << *numbers << std::endl; // pointer --> value
    std::cout << std::endl;

    // Comparing with char pointers
    char *chars {};
    char chara {'A'};
    chars = &chara;
    std::cout << chars <<std::endl; // pointer --> value (different for char in pointer)
    std::cout << chara <<std::endl; // char --> value
    std::cout << &chara << std::endl; // char --> value (different for char)
    std::cout << &chars << std::endl; // pointer --> address
    std::cout << *chars << std::endl; // pointer --> value

        
    //Print out the students
	std::cout << std::endl;
    std::cout << "Printing out the students : " << std::endl;
    for ( const char * student : students){
        std::cout << student << std::endl;
    }


   // *students[0] = 'K';

    //Can swap for new student though.
    const char * new_student {"Bob the Great"};
    //students[0] = new_student; // Compiler error


   //Print out the students
	std::cout << std::endl;
    std::cout << "Printing out the students : " << std::endl;
    for ( const char * student : students){
        std::cout << student << std::endl;
    }
   
    return 0;
}