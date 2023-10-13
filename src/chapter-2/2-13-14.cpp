#include <iostream>

int i = 42;
int main() {
  // 2.13
  int i = 50; // shadows global i
  int j = i;  // i = local i
  std::cout << j << '\n';

  // 2.14
  i = 100; // local-i
  int sum = 0;
  for (int i = 0; i != 10; ++i) // double-local-i shadows previous in this scope
    sum += i;                   // sum from 0 to 9
  // now we see local-i
  std::cout << i << ' ' << sum << '\n';
  return 0;
}