#include <iostream>

std::string global_str; // empty string
int global_int;         // init value = 0

int main() {
  // std::cin >> int input_value; // wrong - no typename should be in cin
  // int i = { 3.14 }; // wrong
  // double salary = wage = 9999.99; // wrong
  int i = 3.14; // ok but value will be 3
  std::cout << i << '\n';

  // int local_int; // no init value
  std::string local_str; // empty string
  std::cout << global_str << global_int << local_str << '\n';
  return 0;
}