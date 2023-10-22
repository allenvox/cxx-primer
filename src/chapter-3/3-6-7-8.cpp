#include <iostream>

int main() {
  std::string str("hello");
  std::cout << str << '\n';
  for(char &c : str) {
    c = 'X';
  }
  std::cout << str << '\n';
  
  // 1. with while-loop it's not clear how many iterations we'll do
  //    and also can get segfault if out of bounds
  // 2. for-loop is ok
  // 3. range-based for-loop is awesome
  return 0;
}