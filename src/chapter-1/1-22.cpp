#include "Sales_item.h"

#include <iostream>

int main() {
  Sales_item item, sum;
  std::cout << "(press Ctrl+D to end)\nEnter sales items with the same ISBN:\n";
  while (std::cin >> item) {
    sum += item;
  }
  std::cout << sum << std::endl;
  return 0;
}