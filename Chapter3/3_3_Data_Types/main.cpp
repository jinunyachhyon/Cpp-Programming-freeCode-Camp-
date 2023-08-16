#include <iostream>
#include <iomanip>



int main(){

    // Float -- Data Type
    //Declare and initialize the variables
    float number1 {1.12345678901234567890f}; // for float suffix - f
    double number2 {1.12345678901234567890}; // for double no suffix
    long double number3  {1.12345678901234567890L}; // for long double suffix - L
    
    //Print out the sizes
    std::cout << "sizeof float : " << sizeof(float) << std::endl;
    std::cout << "sizeof double : " << sizeof(double) << std::endl;
    std::cout << "sizeof long double : " << sizeof(long double) << std::endl;

    //Precision
    std::cout << std::setprecision(20); // Control the precision from std::cout.
    std::cout << "number1 is : " << number1 << std::endl; //7 digits
    std::cout << "number2 is : " << number2 << std::endl; // 15'ish digits
    std::cout << "number3 is : " << number3 << std::endl; // 15+ digits


    //Scientific notation
    //What we have seen so far in terms of floating point types
    //is fixed notation. There is another notation, scientific
    //that is handy if you have really huge numbers or small numbers
    //to represent

    std::cout << "-------------------------" << std::endl;
    
    double number5 {192400023};
    double number6 {1.92400023e8};
    double number7 {1.924e8};           // Can ommit the lower 00023
                                        // for simplicity if our application allows that.
    double number8 {0.00000000003498};
    double number9 {3.498e-11}; // multiply with 10 exp(-11)
    
    std::cout << "number5 is : " << number5 << std::endl;
    std::cout << "number6 is : " << number6 << std::endl;
    std::cout << "number7 is : " << number7 << std::endl;
    std::cout << "number8 is : " << number8 << std::endl;
    std::cout << "number9 is : " << number9 << std::endl;


    // Boolean -- Data Type
    bool red_light {true};
    bool green_light {false};

    if (red_light == true){
        std::cout << "Stop!!" << std::endl;
    }
    else{
        std::cout << "Go through!" << std::endl;
    }


    // Char and text -- Data Type
    char char1 {'j'};
    std::cout << char1 << std::endl;

    char char2 {65}; // ASCII code
    std::cout << "value(char) : " << char2 << std::endl;
    std::cout << "value(int) : " << static_cast<int>(char2) << std::endl; // change data type


    // Auto -- Let the compiler deduce the type
    auto var1 {1}; // int
    auto var2 {21.30}; // double
    auto var3 {21.30f}; // float
    auto var4 {'m'}; // char

    auto var6 { 123u}; // unsigned - suffix u
    auto var7 { 123ul}; //unsigned long - suffix ul
    auto var8 { 123ll}; // long long - suffix ll
   
    // Careful about auto assignments!!!
    auto var5 {666u}; // Declare and initialize with type deduction

    var5 = -22; // Assign -ve number. DANGER!
    std::cout << "var5: " << var5 << std::endl; // Output: garbage value because, var5 is deduced as unsigned int, but var5 is assigned signed int

    return 0;
}