// push_back, insert, and emplace are three methods for adding elements to a vector.

/*
1. push_back : Add an element at the end of the vector. 
               You provide the element directly, and the vector will make a copy of it.

2. insert : Insert elements at a specified position in the vector. 
            You provide an iterator (position) and the element to insert. The element is copied into the vector.

3. emplace : Construct elements in place directly within the vector, without creating a temporary copy.
*/

#include <iostream>
#include <vector>

struct Point {
    int x, y;

    // Constructor for the 'Point' struct
    /*
    Constructor takes two integer parameters, x and y, and 
    initializes the x and y fields of the Point object with the values passed as arguments.
    */ 
    Point(int x, int y) : x(x), y(y) {}
};


int main() {
    std::vector<int> myVector;

    // Using push_back to add elements
    myVector.push_back(1);
    myVector.push_back(2);
    myVector.push_back(3);
    
    std::cout << "Push backed elements: ";
    for (int num : myVector) {
        std::cout << num << " ";
    }
    std::cout << std::endl;


    std::vector<int> myVector1 = {1, 2, 3};
    
    // Using insert to add elements at a specific position
    std::vector<int>::iterator it = myVector1.begin() + 1;
    myVector1.insert(it, 4);
    
    std::cout << "Inserted elements: ";
    for (int num : myVector1) {
        std::cout << num << " ";
    }
    std::cout << std::endl;


    std::vector<int> myVector2;
    
    // Using emplace to add elements in place
    myVector2.emplace_back(1);
    myVector2.emplace_back(3);

    std::cout << "Emplace elements: ";
    for (int num : myVector2) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
    

    std::vector<Point> myVector3;
    
    // Using emplace to add elements in place
    myVector3.emplace_back(1, 2);
    myVector3.emplace_back(3, 4);
    
    std::cout << "Emplace using struct: ";
    for (const Point& p : myVector3) {
        std::cout << "(" << p.x << ", " << p.y << ") ";
    }
    std::cout << std::endl;

    return 0;
}