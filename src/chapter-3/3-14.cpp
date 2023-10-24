#include <iostream>
#include <vector>

int main() {
  using std::vector;
  int in;
  vector<int> ivec;
  std::cout << "Enter some numbers:\n";
  while (std::cin >> in) {
    ivec.push_back(in);
  }
  for (auto i : ivec) {
    std::cout << i << ' ';
  }
  std::cout << '\n';
  return 0;
}