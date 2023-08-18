#include <iostream>

/* Integer Initialization
- Braced Initialization {}
- Functional Initialization ()
- Assignment Initialization = 
*/

int main(){
    // Braced Initializers
    int ele_count; // Contains garbage value

    int lion_count {}; // Inititalize to 0
    int dog_count {10}; // Initialize to 10
    int cat_count {21}; // Initialize to 21

    int total {dog_count + cat_count};

    std::cout << "Total count: " << total << std::endl;

    // Functional Initializer
    int roundoff (2.9); // Information loss -- stores only '2'
    std::cout << "Functional Initial 2.9: " << roundoff << std::endl; 

    // Assignment Initializer
    int bike = 9;
    int truck = 20;
    int vehicle = bike + truck;

    std::cout << "Total Vehicles: " << vehicle << std::endl;

    int rounding = 8.6;
    std::cout << "Rounded 8.6: " << rounding << std::endl;

    return 0;
}