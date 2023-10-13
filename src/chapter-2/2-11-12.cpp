#include <iostream>

int main() {
  // 2.11
  // extern int ix = 1024; // wrong - can't init extern variable
  // int iy; // ok, but not initialized, only defined
  // extern int iz; // ok, initialized somewhere else, defined here

  // 2.12
  // int double = 3.14; // wrong - double is type, not identifier
  // int catch-22; // wrong - can't use '-' in identifiers
  double Double = 3.14; // ok
  // int _; // ok
  // int 1_or_2 = 1; // wrong - can't start identifier with digit

  std::cout << Double << '\n';
  return 0;
}