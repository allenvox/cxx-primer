#include <iostream>

int main() {
  using std::cout;

  // 4.35
  char cval;
  int ival = 1;
  unsigned int ui = 1;
  float fval = 2.1;
  double dval = 2.5;
  cval = 'a' + 3;
  cout << "cval = " << cval << '\n';
  fval = ui - ival * 1.0;
  cout << "fval = " << fval << '\n';
  dval = ui * fval;
  cout << "dval = " << dval << '\n';
  cval = ival + fval + dval;
  cout << "cval = " << cval << '\n';

  // 4.36
  int i = 2;
  double d = 2.1;
  cout << i << " * (int)(" << d << ") = ";
  i *= static_cast<int>(d);
  cout << i << '\n';
  return 0;
}