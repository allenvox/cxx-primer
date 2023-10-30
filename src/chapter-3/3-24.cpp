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
  std::cout << "Sums of pairs: ";
  for (auto i = ivec.begin(); i != ivec.end() - 1; ++i) {
    std::cout << *i + *(i + 1) << ' ';
  }
  std::cout << '\n';
  return 0;
}