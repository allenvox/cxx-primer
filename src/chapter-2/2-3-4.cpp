#include <iostream>

int main() {
  // 2.3
  unsigned u = 10, u2 = 42;
  std::cout << u2 - u << '\n';
  std::cout << u - u2 << '\n';

  // 2.4
  int i = 10, i2 = 42;
  std::cout << i2 - i << '\n';
  std::cout << i - i2 << '\n';
  std::cout << i - u << '\n';
  std::cout << u - i << '\n';
  return 0;
}