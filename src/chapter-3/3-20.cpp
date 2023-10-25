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
  std::size_t size = ivec.size();
  std::cout << "Size: " << size << "\nSums of pairs: ";
  for (std::size_t i = 0; i < size - 1; ++i) {
    std::cout << ivec[i] + ivec[i + 1] << ' ';
  }
  std::cout << "\nSums of first and last, second and last - 1... : ";
  for (std::size_t i = 0; i < size / 2; ++i) {
    std::cout << ivec[i] + ivec[size - i - 1] << ' ';
  }
  std::cout << '\n';
  return 0;
}