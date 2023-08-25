#include <iostream>
#include <string>
#include <cstring>

// Function template
template <typename T>
T maximum (T a, T b){
    return (a>b)? a:b;
}

// Template specialization
template <>
const char* maximum <const char*> (const char* a, const char* b){
    return (std::strcmp(a,b) > 0)? a:b;
}

int main(){
    int a {9};
    int b {10};

    double c {8.67};
    double d {9.645};

    std::string e {"hey"};
    std::string f {"hello"};

    auto r1 = maximum(a,b); // Deduce int 
    std::cout << "Max r1: " << r1 << std::endl;

    auto r2 = maximum(c,d); // Deduce double
    std::cout << "Max r2: " << r2 << std::endl;

    auto r3 = maximum (e,f); // Deduce string
    std::cout << "Max r3: " << r3 << std::endl; // output: hey because y comes after l; lexographically

    /* // Template doesnot do as expected -- compare the address of cstring w and a
    const char* g {"wild"};
    const char* h {"animal"};
    std::cout << "Address of g: " << &g << std::endl;
    std::cout << "Address of h: " << &h << std::endl;
    auto r4 = maximum(g,h);
    std::cout << "Max r4: " << r4 << std::endl; // output: animal because it compares the pointer value i.e address
                                               // address of 'a' is greater than address of 'w' */


    // Avoid this using - TEMPLATE SPECIALIZATION
    const char* i {"wild"};
    const char* j {"animal"};
    auto r5 = maximum(i,j);
    std::cout << "Max r5: " << r5 << std::endl;

    return 0;
}