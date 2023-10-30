#include <iostream>

// 3.28
std::string sa[10]; // empty strings
int ia[10];         // zeroes

std::size_t txt_size() { return 5; }

int main() {
  // 3.27
  unsigned buf_size = 1024;
  int ia11[buf_size];   // ok
  int ia12[4 * 7 - 14]; // ok
  int ia13[txt_size()]; // ok
  // char st[11] = "fundamental"; // wrong - size needs to be 12 (with \0)

  // 3.28
  for (auto s : sa) {
    std::cout << s << ' ';
  }
  std::cout << '\n';

  for (auto i : ia) {
    std::cout << i << ' ';
  }
  std::cout << '\n';

  std::string sa2[10]; // empty strings
  for (auto s : sa2) {
    std::cout << s << ' ';
  }
  std::cout << '\n';

  int ia2[10]; // UNDEFINED (INT MIN/MAX, 0, RANDOM ABSOLUTELY)
  for (auto i : ia2) {
    std::cout << i << ' ';
  }
  std::cout << '\n';

  // 3.28

  return 0;
}