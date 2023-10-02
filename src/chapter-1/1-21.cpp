#include "Sales_item.h"

#include <iostream>

int main() {
  Sales_item item1, item2;
  std::cout << "Enter two sales items with the same ISBN:\n";
  std::cin >> item1 >> item2;
  std::cout << item1 + item2 << std::endl;
  return 0;
}