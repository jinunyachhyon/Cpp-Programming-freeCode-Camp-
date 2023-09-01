#include <iostream>

const double PI {3.1415926535897932384626433832795};

class Cylinder {
    public : 
        // Constructor
        Cylinder() = default;
        Cylinder(double rad_param,double height_param){
            base_radius = rad_param;
            height = height_param;
        }
        // Functions (methods)
        double volume(){
            return PI * base_radius * base_radius * height;
        }
        
        // Setter and getter methods
        double get_base_radius(){
            return base_radius;
        }
        double get_height(){
            return height;
        }

        void set_base_radius(double rad_param){
            base_radius = rad_param;
        }

        void set_height(double height_param){
            height = height_param;
        }

    private:
        //Member variables
        double base_radius{1};
        double height{1};
};



int main(){
    Cylinder cylinder1(10,10);
    std::cout << "volume : " << cylinder1.volume() << std::endl;

    // Get variables -- Getters
    auto radius = cylinder1.get_base_radius();
    auto height = cylinder1.get_height();

    std::cout << "radius: " << radius << std::endl;
    std::cout << "height: " << height << std::endl;

    // Modify our object -- Setters
    cylinder1.set_base_radius(100);
    cylinder1.set_height(10);

    std::cout << "volume : " << cylinder1.volume() << std::endl;
    std::cout << std::endl;

    // Another object 
    Cylinder c2; // Calling default constructor
    auto r = c2.get_base_radius();
    auto h = c2.get_height();
    std::cout << "radius of new obj: " << r << std::endl;
    std::cout << "height os new obj: " << h << std::endl;

    return 0;
}