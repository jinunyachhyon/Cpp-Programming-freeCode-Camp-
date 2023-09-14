// difference between copying and not copying when adding elements to a vector using both 'insert' and 'emplace'.

#include <iostream>
#include <vector>

int main() {
    std::vector<std::string> insert_vec;

    // Using insert to add elements by copying
    std::string name = "Alice";
    insert_vec.insert(insert_vec.end(), name); // Copying 'name' into the vector
    name = "Bob"; // Modify 'name' after inserting

    std::cout << "Vector after insertion: ";
    for (const std::string& str : insert_vec) {
        std::cout << str << " ";
    }

    std::cout << "\nOriginal name (insert): " << name << std::endl;

    std::string* address_of_vec = &insert_vec[0];
    std::string* address_of_ori = &name;
    std::cout << "Address of vector element: " << address_of_vec << std::endl;
    std::cout << "Address of original string: " << address_of_ori << std::endl;
    std::cout << std::endl;


    std::vector<std::string> emplace_vec;

    // Using emplace to add elements without copying
    std::string namee = "Alice";
    emplace_vec.emplace_back(namee); // Constructing an element in place
    namee = "Bob"; // Modify 'name' after emplace

    std::cout << "Vector after emplace: ";
    for (const std::string& str : emplace_vec) {
        std::cout << str << " ";
    }

    std::cout << "\nOriginal name (emplace): " << namee << std::endl;

    std::string* address_of_evec = &emplace_vec[0];
    std::string* address_of_eori = &namee;
    std::cout << "Address of vector element: " << address_of_evec << std::endl;
    std::cout << "Address of original string: " << address_of_eori << std::endl;

    return 0;
}
