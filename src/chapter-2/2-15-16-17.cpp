#include <iostream>

int main() {
  // 2.15
  int ival = 1.01; // ok, but will be just 1
  // int &rval1 = 1.01; // wrong
  int &rval2 = ival;
  // int &rva3; // wrong - undefined
  std::cout << ival << ' ' << rval2 << '\n';

  // 2.16
  int i = 0, &r1 = i; // r1 -> i = 0
  double d = 0, &r2 = d;
  r2 = 3.14159;
  r2 = r1; // r2 = 0
  i = r2;  // i = 0
  r1 = d;  // r1 = 0
  std::cout << "i = " << i << '\n';
  std::cout << "r1 = " << r1 << '\n';
  std::cout << "d = " << d << '\n';
  std::cout << "r2 = " << r2 << '\n';

  // 2.17
  int j, &rj = j;
  j = 5;
  rj = 10; // rj is an alias for j => j will be changed to 10
  std::cout << j << ' ' << rj << '\n';
  return 0;
}