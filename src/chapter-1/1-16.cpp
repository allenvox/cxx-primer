#include <iostream>

int main() {
  int val, sum = 0;
  std::cout << "(press Ctrl+D to stop)\nSum of\n";
  while (std::cin >> val) {
    sum += val;
  }
  std::cout << "equals to " << sum << std::endl;
  return 0;
}