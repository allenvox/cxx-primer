#include <iostream>

int main() {
  const int i = 42;
  auto j = i; // int
  const auto &k = i; // const int&
  auto *p = &i; // const int*
  const auto j2 = i; // const int
  const auto &k2 = i; // const int&
  std::cout << j << ' ' << k << ' ' << *p << ' ' << j2 << ' ' << k2 << '\n';
  return 0;
}