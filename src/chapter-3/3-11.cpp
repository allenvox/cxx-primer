#include <iostream>

int main() {
  const std::string s = "Keep out!\n";
  for (auto &c : s) {
    // c = const char&
    std::cout << c;
  }
  return 0;
}