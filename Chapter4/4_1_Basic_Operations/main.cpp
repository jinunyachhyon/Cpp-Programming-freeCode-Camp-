#include <iostream>


int main(){
   
   //Addition
   int number1{2};
   int number2{7};

   int result = number1 + number2;
   std::cout << "result : " << result << std::endl;

   //Subtraction
   result = number2 - number1 ;
   std::cout << "result : " << result << std::endl;

   result = number1 - number2;
   std::cout << "result : " << result << std::endl;

   //Multiplication
   result = number1 * number2;
   std::cout << "result : " << result << std::endl;


   //Division
   result = number2 / number1;
   std::cout << "result : " << result << std::endl;


   //Modulus -- remainder
   result = number2 % number1; // 7 % 2
   std::cout << "result : " << result << std::endl; // 1

   result = 31 % 10;
   std::cout << "result : " << result << std::endl; // 1


   // Precedence and Associativity -- which operation to do first and in which direction
   // Precedence -- BODMAS, Associativity -- Left to right
   int a {6};
   int b {3};
   int c {8};
   int d {9};
   int e {3};
   int f {2};
   int g {5};

   result = a/b*c +d - e + f; //2 * 8 + 9 - 3 + 2 = 16 + 9 - 3 + 2 
   std::cout << "result : " << result << std::endl;

   result = (a + b) * c -d/e -f + g; //9 * 8 - 9/3 - 2 + 5 = 9 * 8 - 3 -2 + 5 = 72 - 3 -2 + 5
   std::cout << "result : " << result << std::endl;


   // Prefix and Postfix
   std::cout << "======Postfix increment and decrement======"<< std::endl;
   int value {5};
   
   std::cout << "The value is (incrementing) : " << value++ << std::endl; //5
   std::cout << "The value is (incrementing) : " << value++ << std::endl; //6
   std::cout << "The value is : " << value << std::endl; // 7
   
   //Reset value to 5
   value = 5;
   
   std::cout << "The value is (decrementing) : " << value-- << std::endl; //5
   std::cout << "The value is : " << value << std::endl; // 4


   std::cout << "======Prefix increment and decrement======"<< std::endl;

   //Reset value to 5
   value = 5;
   std::cout << "The value is (prefix++ in place) : " << ++value << std::endl; // 6

   //Reset value to 5;
   value = 5;
   std::cout << "The value is (prefix--) : " << --value << std::endl; // 4
   
   return 0;
}