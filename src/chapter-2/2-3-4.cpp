#include <iostream>

int main() {
  unsigned u = 10, u2 = 42;
  std::cout << u2 - u << '\n';
  std::cout << u - u2 << '\n';
  int i = 10, i2 = 42;
  std::cout << i2 - i << '\n';
  std::cout << i - i2 << '\n';
  std::cout << i - u << '\n';
  std::cout << u - i << '\n';
  return 0;
}