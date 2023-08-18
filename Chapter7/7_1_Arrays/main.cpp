#include <iostream>

int main(){
    // ** Initialize array: array_name[size] {value of array} eg. even_number[5] {2,4,6,8,10} 

    // Declare array of size 10
    int array1 [10]; 

    // Now store even digits on the array
    int i {0};
    int j {0};
    for (j; i<10; j++){
        if (j%2 == 0){
            array1 [i] = j;
            i++;
        }
    }

    // Printing all values of the array
    i = 0;
    for (i; i<10; i++){
        std::cout << "Array position: " << i << " value: " << array1[i] << std::endl;
    } 


    // Omit the size of the array at declaration
    int shoe_size [] {10,11,12, 26, 37,38};

    // Range based loop -- run until the size of array
    for (auto value : shoe_size) {
        std::cout << "shoe size : " << value << std::endl;
    }


    // constant array 
    const int birds[] {10,12,15,11,18,17,23,56}; 
    // birds[2] = 8; // throws error because it cannot be manipulated

    // ** Array stores SAME DATA TYPE only!!
    return 0;
}