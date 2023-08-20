#include <iostream>


int main(){

	//Declare pointer and reference

    double double_value {12.34};
    double& ref_double_value {double_value}; // Reference to double_value
    double* p_double_value {&double_value}; //Pointer to double_value
	
	//Reading
	std::cout << "double_value : " << double_value << std::endl; //12.34
	std::cout << "ref_double_value : " << ref_double_value << std::endl; //12.34
	std::cout << "p_double_value : " << p_double_value << std::endl; //address of 12.34
	std::cout << "*p_double_value : " << *p_double_value << std::endl; //12.34
	
	//Writting through pointer
	*p_double_value = 15.44; 
	
    std::cout << std::endl;
	std::cout << "double_value : " << double_value << std::endl; //15.44
	std::cout << "ref_double_value : " << ref_double_value << std::endl; //15.44
	std::cout << "p_double_value : " << p_double_value << std::endl; // address 
	std::cout << "*p_double_value : " << *p_double_value << std::endl; //15.44
	
	//Writting through reference
	ref_double_value = 18.44;
	
    std::cout << std::endl;
	std::cout << "double_value : " << double_value << std::endl; //18.44
	std::cout << "ref_double_value : " << ref_double_value << std::endl; //18.44
	std::cout << "p_double_value : " << p_double_value << std::endl; //address
	std::cout << "*p_double_value : " << *p_double_value << std::endl; //18.44


    double some_other_double{78.45};

    //Make the reference reference something else.
    ref_double_value = some_other_double; // **Cant make a reference refer to something 
    // This works, but it doesn't make ref_double_value referene some_other_double
    // it merely changes the value referenced by ref_double_value to 78.45

    std::cout << "Making the reference reference something else..." << std::endl;
    std::cout << std::endl;
	std::cout << "double_value : " << double_value << std::endl; //78.45
	std::cout << "ref_double_value : " << ref_double_value << std::endl; //78.45
	std::cout << "p_double_value : " << p_double_value << std::endl; //address of double_value
	std::cout << "*p_double_value : " << *p_double_value << std::endl; //18.44



    //Make the pointer point to something else
    p_double_value = &some_other_double; // address of some_other_double --> p_double_value
    std::cout << "Making the pointer point somewhere else..." << std::endl;
    std::cout << std::endl;
	std::cout << "double_value : " << double_value << std::endl; //78.45
	std::cout << "ref_double_value : " << ref_double_value << std::endl; //78.45
    std::cout << "&double_value : " << &double_value << std::endl; //address of double_value
    std::cout << "&ref_double_value : " << &ref_double_value << std::endl; //address of double_value
	std::cout << "p_double_value : " << p_double_value << std::endl; //address of some_other_double
	std::cout << "*p_double_value : " << *p_double_value << std::endl; //78.45


    *p_double_value = 555.5;

    std::cout << std::endl;
	std::cout << "double_value : " << double_value << std::endl; //78.45
	std::cout << "ref_double_value : " << ref_double_value << std::endl; //78.45
    std::cout << "&double_value : " << &double_value << std::endl; //address of double_value
    std::cout << "&ref_double_value : " << &ref_double_value << std::endl; //address of double_value
	std::cout << "p_double_value : " << p_double_value << std::endl; //address of some_other_double
	std::cout << "*p_double_value : " << *p_double_value << std::endl; //555.5
   
    return 0;
}