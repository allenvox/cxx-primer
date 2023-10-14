#include <iostream>

int main() {
  // 2.27
  int j = -1; //, &r = 0; // wrong - non const reference is only for lvalues
  std::cout << j << ' ';
  const int i = -1, &r = 0; // const reference is ok
  std::cout << i << ' ' << r << ' ';
  const int i2 = i, &ri = i; // ok
  std::cout << i2 << ' ' << ri << ' ';
  const int *p1 = &i2; // ok
  std::cout << *p1 << ' ';
  // int *const p2 = &i2; // cant init reference to const pointer
  const int *const p3 = &i2;
  std::cout << *p3 << ' ';
  // const int & const r3; // reference can't be const and uninitialized

  // 2.28
  int *const cp = nullptr; // default init, cp's in-value can't be changed
  if (cp == nullptr) {
    std::cout << "\ncp is nullptr\n";
  }
  // const int ic, &r2 = ic; // wrong - no init of const int
  const int *pp; // pointer's address can't be changed - ok
  pp = &i;
  std::cout << *pp << ' ';
  int *const p5 = nullptr; // default but bad - can't change nullptr
  if (p5 == nullptr) {
    std::cout << "\np5 is nullptr\n";
  }

  // 2.29
  /*
  i = ic; // int = const int, ok
  p1 = p3; // int* = const int *const, ok
  p1 = &ic; // int* = *const int
  p3 = &ic; // const int *const = *const int
  p2 = p1; // int *const = int* - ok, change address
  ic = *p3; // const int = const int - can't change value of const int
  */
  return 0;
}