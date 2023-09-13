#include<iostream>

#include<thread>

void function1(char c) {
  for (int i = 0; i < 200; ++i)
    std::cout << c;
}

void function2() {
  for (int i = 0; i < 200; ++i)
    std::cout << "B";
}

int main() {
  std::thread worker1(function1, 'o');
  std::thread worker2(function2);
  worker1.join();
  worker2.join();
  std::cout << std::endl;
}