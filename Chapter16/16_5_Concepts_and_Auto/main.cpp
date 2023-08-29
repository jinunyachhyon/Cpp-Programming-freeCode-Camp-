#include <iostream>
#include <concepts>

//This syntax constrains the auto parameters you pass in 
//to comply with the std::integral concept
std::integral auto add (std::integral auto a,std::integral auto b){
	return a + b;
}


int main(){
    std::integral auto x = add(5,8);
    // std::floating_point auto x = add(5,8); // Error: because even tho input parameters are integral type,
                                              // return type is integral type which doesnot satisfy floating_point concept
    std::cout << "x: " << x << std::endl;
  
    return 0;
}