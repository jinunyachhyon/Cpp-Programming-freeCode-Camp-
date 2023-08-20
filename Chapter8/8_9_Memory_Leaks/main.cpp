#include <iostream>

// Memory Leak - When we loose access to memory that is dynamically allocated

int main(){
    
    int *p_number {new int{67}}; // Points to some address, let's call that address1
    
    //Should delete and reset here 
    
    int number{55}; // stack variable
    
    p_number = &number; // Now p_number points to address2 , but address1 is still in use by 
                        // our program. But our program has lost access to that memory location.
						// MEMORY HAS BEEN LEAKED!
    

	//Double allocation 

    int *p_number1 {new int{55}}; //DMA
    
	//Use the pointer
    
	//Should delete and reset here.
	
    p_number1 = new int{44}; // memory with int{55} leaked. since int{55} address is still in use; 
                             // but pointer has new address of int{44}

    delete p_number1;
    p_number1 = nullptr;
    

	//Nested scopes with dynamically allocated memory
	{
		int *p_number2 {new int{57}};

        //Use the dynamic memory

	}
	//Memory with int{57} leaked. since they are in local scope within the nest and cannot be accessed from outside
    return 0;
}