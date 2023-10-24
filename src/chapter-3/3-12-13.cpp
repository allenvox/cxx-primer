#include <iostream>
#include <vector>

int main() {
  using std::string;
  using std::vector;

  // 3.12
  vector<vector<int>> ivec; // ok - empty vector
  for (auto vec : ivec) {
    for (auto i : vec) {
      std::cout << i << ' ';
    }
  }
  // wrong - can't convert vector of vectors of ints to vector of strings
  // vector<string> svec = ivec;
  vector<string> svec(10, "null"); // ok
  for (auto s : svec) {
    std::cout << s << ' ';
  }
  std::cout << '\n';

  // 3.13
  vector<int> v1; // empty vector
  for (auto i : v1) {
    std::cout << i << ' ';
  }

  vector<int> v2(10); // 10 elements, default value = 0
  for (auto i : v2) {
    std::cout << i << ' ';
  }
  std::cout << '\n';

  vector<int> v3(10, 42); // 10 elements with value 42
  for (auto i : v3) {
    std::cout << i << ' ';
  }
  std::cout << '\n';

  vector<int> v4{10}; // vector with single element 10
  for (auto i : v4) {
    std::cout << i << ' ';
  }
  std::cout << '\n';

  vector<int> v5{10, 42}; // vector of 10 and 42
  for (auto i : v5) {
    std::cout << i << ' ';
  }
  std::cout << '\n';

  // vector<string> v6(10}; // wrong parentheses
  // vector<string> v7{10, "hi"}; // wrong parentheses
  return 0;
}