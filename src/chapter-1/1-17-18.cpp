#include <iostream>

int main() {
  std::cout << "(press Ctrl+D to stop)\nEnter some values:\n";
  int currVal = 0, val = 0;
  if (std::cin >> currVal) {
    int cnt = 1;
    while (std::cin >> val) {
      if (val == currVal) {
        ++cnt;
      } else {
        std::cout << currVal << " occurs " << cnt << " times\n";
        currVal = val;
        cnt = 1;
      }
    }
    std::cout << currVal << " occurs " << cnt << " times" << std::endl;
  }
  // if all input values are equal
  // it will print how many times it occured

  // if all input values are different
  // - print out that every value occured once
  return 0;
}