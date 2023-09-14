#include <iostream>
#include <vector>

class MyClass {
public:
    MyClass(int val) : value(val) {
        std::cout << "Constructor called with value: " << value << std::endl;
    }

    int getValue() const {
        return value;
    }

private:
    int value;
};

int main() {
    std::vector<MyClass> myVector;

    // Using push_back to copy objects into the vector
    MyClass obj1(1);
    myVector.push_back(obj1); // Copies obj1 into the vector

    // Using insert to copy objects into the vector
    MyClass obj2(2);
    myVector.insert(myVector.begin(), obj2); // Copies obj2 into the vector

    // Using emplace_back to construct objects inside the vector
    myVector.emplace_back(3); // Constructs a new object with value 3 inside the vector

    // Access and print the values in the vector
    for (const MyClass& obj : myVector) {
        std::cout << "Value in vector: " << obj.getValue() << std::endl;
    }

    return 0;
}
