#include <iostream>

int main() {
  // 2.20
  int i = 42;
  int *p1 = &i;
  *p1 = *p1 * *p1;
  std::cout << *p1 << '\n';

  // 2.21
  i = 1;
  // double *dp = &i; // wrong - can't initialize double pointer to int
  // int *ip = i; // can't init pointer with address 'i'
  int *p = &i; // ok
  std::cout << *p << '\n';

  // 2.22
  if (p) {
    std::cout << "p is not nullptr\n";
  }
  if (*p) {
    std::cout << "p's value != 0\n";
  }
  return 0;
}