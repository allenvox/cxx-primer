#include <iostream>

int main() {
  // 2.18
  int *p;
  int a = 5, b = 1;
  p = &a;
  std::cout << *p << '\n';
  p = &b;
  std::cout << *p << '\n';
  *p = 3;
  std::cout << *p << '\n';

  // 2.19
  int c = 0;
  // reference - CAN NOT be referenced to other lvalue
  // are simple aliases for lvalues
  // can't be undefined, are working only with existing objects
  int &rc = c;
  // getting value with just putting reference
  int cval = rc;
  std::cout << cval << '\n';

  // pointer - CAN be pointed to other lvalue
  // are for dynamic memory handling
  // can be empty (nullptr), can point to uncontrolled memory
  int *pc = &c;
  // getting value with pointer
  int vc = *pc;
  std::cout << vc << '\n';
  return 0;
}