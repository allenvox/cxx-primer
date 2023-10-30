#include <iostream>

int main() {
  // 3.34
  int p[3] = {1, 2, 3};
  int *p1 = &p[0], *p2 = &p[2];
  p1 += p2 - p1; // p1 is now p[2]
  std::cout << *p1 << '\n';

  // 3.35
  int *i = &p[0];
  while (1) {
    *i = 0;
    if (i == &p[2]) {
      break;
    }
    ++i;
  }
  for (auto i : p) {
    std::cout << i << ' ';
  }
  std::cout << '\n';
  return 0;
}