#include <iostream>
#include <vector>

int main() {
  using std::vector;

  // 3.18
  // vector<int> ivec; // wrong - empty vector, no allocated memory
  vector<int> ivec(1); // allocate [0]
  ivec[0] = 42;
  std::cout << ivec[0] << '\n';

  // 3.19
  vector<int> v1{42, 42, 42, 42, 42, 42, 42, 42, 42, 42}; // too much
  vector<int> v2(10, 42);                                 // best practice
  vector<int> v3;
  for (int i = 0; i < 10; ++i) { // too much space allocating
    v3.push_back(42);
  }
  for (std::size_t i = 0; i < 10; ++i) {
    std::cout << v1[i] << ' ' << v2[i] << ' ' << v3[i] << '\n';
  }
  return 0;
}