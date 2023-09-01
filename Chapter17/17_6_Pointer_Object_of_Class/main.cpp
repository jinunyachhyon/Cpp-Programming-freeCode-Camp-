#include <iostream>
#include "cylinder.h"

int main(){
    Cylinder cylinder1(10,10);
    std::cout << "volume : " << cylinder1.volume() << std::endl;

    // Stack object
    // Pointer class object
    Cylinder * p_cylinder = &cylinder1;
    std::cout << "cylinder1 object address: " << p_cylinder << std::endl;
    // Derefrencing the pointer class object to use class methods
    std::cout << "Volume method from pointer class obj : " << (*p_cylinder).volume() << std::endl;

    // Alternative method to derefrence
    std::cout << "Volume method, alt. method from pointer class obj :" << p_cylinder->volume() << std::endl;
    std::cout << std::endl;


    // Heap object
    // Create a cylinder heap object through the new operator
    Cylinder * p_cylinder2 = new Cylinder(100,2);
    std::cout << "Volume (Heap) : " << p_cylinder2->volume() << std::endl;

    delete p_cylinder2;

    return 0;
}