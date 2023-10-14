#include <iostream>

int main() {
  // 2.30
  const int v2 = 0;        // low-level const
  int v1 = v2;             // no const
  int *p1 = &v1, &r1 = v1; // no const
  const int *p2 = &v2, *const p3 = &v1, &r2 = v2;
  // ^ p2 - upper-level const, p3 - low-level const, r2 - upper-level const
  std::cout << r2 << ' ';

  // 2.31
  r1 = v2; // ok
  // p1 = p2; // wrong conversion from const int* to int*
  // p1 = p3; // wrong conversion from const int* to int*
  p2 = p1; // ok, const int* = int*
  p2 = p3; // ok, const int* = const int* const
  std::cout << *p2 << std::endl;
  return 0;
}