#include <iostream>
#include <string>
#include <vector>
#include <thread>

void print(int n, const std::string &str)  {
  std::string msg = std::to_string(n) + " : " + str;
  std::cout << msg  << std::endl;
}
 
int main() {
  std::vector<std::string> s = {
      "Educative.blog",
      "Educative",
      "courses",
      "are great"
  };

  // Single thread 
  /*
    thread t1 created --> t1.join() [wait for t1 to complete] and cycle continue and hence, serial result
  */
  for (int i = 0; i < s.size(); i++) {
    std::thread t1(print, i, s[i]);
    t1.join();
  }
  std::cout << std::endl;


  // Multiple threads
  std::vector<std::thread> threads;
 
  for (int i = 0; i < s.size(); i++) {
    threads.push_back(std::thread(print, i, s[i]));
  }
 
  for (auto &th : threads) {
    th.join(); // wait for all the threads to complete the execution
  }

  return 0;
}
