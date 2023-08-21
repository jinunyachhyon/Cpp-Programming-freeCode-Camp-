#include <iostream>

int main(){

    int int_data{33}; 
    double double_data{55};

    //References -- alias variable that reference an original variable 
    int& ref_int_data{int_data}; // ref_int_data = int_data (so, ref_int_data has value and add. of int_data)
    double& ref_double_data{double_data};

    //Print stuff out
    std::cout << "int_data : " << int_data << std::endl;
    std::cout << "&int_data : " << &int_data << std::endl;
    std::cout << "double_data : " << double_data << std::endl;
    std::cout << "&double_data : " << &double_data << std::endl;

    std::cout << "=======================" << std::endl;

    std::cout << "ref_int_data : " << ref_int_data << std::endl; // value
    std::cout << "&ref_int_data : " << &ref_int_data << std::endl; // address
    std::cout << "ref_double_data : " << ref_double_data << std::endl; // value
    std::cout << "&ref_double_data : " << &ref_double_data << std::endl; // address

    int_data = 111;
    double_data = 67.2;


    //Print stuff out
    std::cout << std::endl;
    std::cout << "int_data : " << int_data << std::endl;
    std::cout << "&int_data : " << &int_data << std::endl;
    std::cout << "double_data : " << double_data << std::endl;
    std::cout << "&double_data : " << &double_data << std::endl;

    std::cout << "=======================" << std::endl;

    // Changes in referernce, because it represents the same address and value change in the address an be visualized below
    std::cout << "ref_int_data : " << ref_int_data << std::endl; 
    std::cout << "&ref_int_data : " << &ref_int_data << std::endl;
    std::cout << "ref_double_data : " << ref_double_data << std::endl;
    std::cout << "&ref_double_data : " << &ref_double_data << std::endl;


    ref_int_data = 1012;
    ref_double_data = 1000.45;


   //Print stuff out
    std::cout << std::endl;
    std::cout << "int_data : " << int_data << std::endl;
    std::cout << "&int_data : " << &int_data << std::endl;
    std::cout << "double_data : " << double_data << std::endl;
    std::cout << "&double_data : " << &double_data << std::endl;

    std::cout << "=======================" << std::endl;

    std::cout << "ref_int_data : " << ref_int_data << std::endl;
    std::cout << "&ref_int_data : " << &ref_int_data << std::endl;
    std::cout << "ref_double_data : " << ref_double_data << std::endl;
    std::cout << "&ref_double_data : " << &ref_double_data << std::endl;
    
    return 0;
}