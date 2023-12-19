#include <iostream>

int main() {
  // 4.11
  int a = 5, b = 4, c = 3, d = 2;
  if (a > b && b > c && c > d) {
    std::cout << a << " > " << b << " > " << c << " > " << d << '\n';
  }

  // 4.12
  int i = 1, j = 2, k = 2;
  if (i != (j < k)) { // (i != j < k) in order
    std::cout << i << " != " << (j < k) << "(j < k)\n";
  }
  return 0;
}