#include <iostream>

int main() {
  // working properly
  std::cout << "/*";
  std::cout << "*/";

  // not working
  // std::cout << /* "*/" */;

  // unreadable but working - NOT TO DO
  std::cout << /* "*/ " /* " /*" */;
  return 0;
}