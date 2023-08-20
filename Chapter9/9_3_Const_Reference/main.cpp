#include <iostream>



int main(){

	//Non const reference
	std::cout << std::endl;
	std::cout << "Non const reference : " << std::endl;
	int age {27};
	int& ref_age{age};
    // const int& ref_age{age}; // cannot change constant ref_age to modify the original
	
	std::cout << "age : " << age << std::endl;
	std::cout << "ref_age : " << ref_age << std::endl;
	
	
	//Can modify original variable through reference

	std::cout << std::endl;
	std::cout << "Modify original variable through reference : " << std::endl;
	
	ref_age++; //Mofify through reference --> Throws error if -- ref_age is constant
    // age++;
	
	std::cout << "age : " << age << std::endl;
	std::cout << "ref_age : " << ref_age << std::endl;


   // Simulating reference behavior with pointers
   // const int * const p_age {&age};
   // *p_age = 45; // Throws error because the pointer is constant and cannot make changes to change original value
	
   
    return 0;
}