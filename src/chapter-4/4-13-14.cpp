#include <iostream>

int main() {
  // 4.13
  int i;
  double d;
  d = i = 3.5; // i = 3, d = 3.0
  std::cout << "i = " << i << ", d = " << d;
  i = d = 3.5; // i = 3, d = 3.5;
  std::cout << "\ni = " << i << ", d = " << d << '\n';

  // 4.14
  // if (42 = i) // error - can't assign lvalue to rvalue
  if (i = 42) { // assign 42 to i, check if i != 0
    std::cout << "i != 0\n";
  }
  return 0;
}