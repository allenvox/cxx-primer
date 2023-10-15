#include <iostream>

int main() {
  // 2.36
  int a = 3, b = 4;
  decltype(a) c = a;   // int
  decltype((b)) d = a; // int&
  ++c;
  ++d;
  std::cout << c << ' ' << d << '\n';

  // 2.37
  decltype(a + b) e = a; // int&
  std::cout << e << '\n';

  // 2.38
  // same type
  int x = 5;
  auto y = x;        // int
  decltype(x) z = x; // int
  std::cout << x << ' ' << y << ' ' << z << '\n';
  // different types
  int x2 = 5;
  const auto y2 = x2;   // const int
  decltype(x2) z2 = x2; // int
  decltype(y2) w2 = y2; // const int
  std::cout << x2 << ' ' << y2 << ' ' << z2 << ' ' << w2 << std::endl;
  return 0;
}