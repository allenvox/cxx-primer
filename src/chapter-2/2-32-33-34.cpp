#include <iostream>

int main() {
  // 2.32
  // int null = 0, *p = null; // name "null" is allowed but not readable
  // if you want pointer to null, use nullptr

  // 2.33
  int i = 0, &r = i;
  auto a = r; // int
  const int ci = i, &cr = ci;
  auto b = ci;       // int
  auto c = cr;       // int
  auto d = &i;       // int*
  auto e = &ci;      // const int*
  const auto f = ci; // const int
  auto &g = ci;      // const int&
  // auto &h = 42; // can't reference to rvalue
  std::cout << a << ' ' << b << ' ' << c << ' ' << *d << ' ' << *e << ' ' << f;
  std::cout << ' ' << g << '\n';

  a = 42; // ok
  b = 42; // ok
  c = 42; // ok
  // d = 42; // wrong - not address
  // e = 42; // wrong - not address
  // g = 42; // wrong - g is const

  // 2.34
  std::cout << a << ' ' << b << ' ' << c << ' ' << *d << ' ' << *e << ' ' << f;
  std::cout << ' ' << g << '\n';
  return 0;
}