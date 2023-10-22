#include <iostream>

int main() {
  std::string in, sum_no_spaces, sum_spaces;
  std::cout << "Enter some strings:\n";
  while (getline(std::cin, in)) {
    sum_no_spaces += in;
    sum_spaces += in + " ";
  }
  std::cout << "Sum of strings without spaces: " << sum_no_spaces << '\n';
  std::cout << "Sum of strings with spaces: " << sum_spaces << '\n';
  return 0;
}