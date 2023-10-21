#include <iostream>

int main() {
  // get a whole string
  std::cout << "input a string:\n";
  std::string str;
  getline(std::cin, str);
  std::cout << "your input: " << str << '\n';

  // get a single word before space
  std::cout << "input a string with spaces:\n";
  std::cin >> str;
  std::cout << "your input: " << str << '\n';
  return 0;
}