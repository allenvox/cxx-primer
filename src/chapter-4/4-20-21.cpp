#include <iostream>
#include <vector>

void print_vector(std::vector<int> vec) {
  for (auto i : vec) {
    std::cout << i << ' ';
  }
  std::cout << '\n';
}

int main() {
  // 4.20 - iterators
  std::vector<int>::iterator iter;
  // *iter++; // return *iter, then ++
  // (*iter)++; // same
  // *iter.empty(); // wrong, should use ->
  // iter->empty(); // ok
  // ++*iter; // return *(iter+1)
  // iter++->empty(); // return iter->empty(), then ++

  // 4.21 - double odd numbers in array
  std::vector<int> vec{1, 2, 3, 4, 5};
  std::cout << "Before: ";
  print_vector(vec);
  for (auto i = vec.begin(); i != vec.end(); ++i) {
    if (*i % 2 == 1) {
      *i *= 2;
    }
  }
  std::cout << "After: ";
  print_vector(vec);
  return 0;
}