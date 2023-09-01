#include <iostream>

const double PI {3.1415926535897932384626433832795};

class Cylinder {
    public : 
        //Constructor
        Cylinder(){
            base_radius = 2.0;
            height = 2.0;
        }

        Cylinder(double rad_param,double height_param){
            base_radius = rad_param;
            height = height_param;
        }
   
        //Functions (methods)
        double volume(){
            return PI * base_radius * base_radius * height;
        }

    private : 
        //Member variables
        double base_radius{1};
        double height{1};
};


int main(){
    Cylinder cylinder1; // Calls constructor directly
    std::cout << "volume : " << cylinder1.volume() << std::endl;

    Cylinder c2(3,10); // This object calls the constructor with corresponding input params
    std::cout << "volume2 : " << c2.volume() << std::endl;

    return 0;
}