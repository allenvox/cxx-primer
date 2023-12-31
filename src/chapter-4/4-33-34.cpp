#include <iostream>

int main() {
  using std::cout;

  // 4.33
  int x = 1, y = 9;
  cout << "x = " << x << ", y = " << y << '\n';
  cout << (true ? ++x, ++y : --x, --y) << '\n';
  cout << "x = " << x << ", y = " << y << '\n';
  cout << (false ? ++x, ++y : --x, --y) << '\n';
  cout << "x = " << x << ", y = " << y << '\n';

  // 4.34
  float fval = 1.0;
  if (fval) {
    cout << "fval = " << fval << " != 0\n";
  }
  int ival = 2;
  double dval = fval + ival; // 3.0
  cout << "dval = " << dval << '\n';
  char cval = 'a'; // 97
  cout << "dval + ival * cval = " << (dval + ival * cval) << '\n';
  return 0;
}