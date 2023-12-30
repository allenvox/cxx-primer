#include <iostream>

int main() {
  using std::cout;

  // 4.29
  int x[10];
  int *p = x;
  cout << (sizeof(x) / sizeof(*x)) << '\n';
  cout << (sizeof(p) / sizeof(*p)) << '\n';

  // 4.30
  // a) sizeof(x) + y
  // b) sizeof(p->mem[i])
  // c) sizeof(a) < b
  // d) sizeof(f()) (if f != void) will return f() return type
  return 0;
}