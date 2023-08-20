#include <iostream>

int main(){

    /*
    // Try to allocate a insanely huge array in one go --> CRASH!
    int * data = new int[10000000000000000];  

    for(size_t i{0} ; i < 10000000 ; ++i){
        int * data = new int[100000000];
    }
    */

   // Handle - method 1
   //exception
    for(size_t i{0} ; i < 100 ; ++i){
        try{
            int * data = new int[100000000000];
        }
        catch(std::exception& ex){
            std::cout << "  Something went wrong : " << ex.what() << std::endl;
        }
    }
    

    // Handle - method 2
   //std::nothrow --> ideal when you dont want exceptions thrown when new fails
    for(size_t i{0} ; i < 100 ; ++i){
   
        int * data = new(std::nothrow) int[10000000000];

        if(data!=nullptr){
            std::cout << "Data allocated" << std::endl;
        }else{
            std::cout << "Data allocation failed" << std::endl;
        }
       
    }


    std::cout << "Program ending well" << std::endl;
    
    return 0;
}