#include "Sales_item.h"

#include <iostream>

int main() {
  Sales_item item;
  std::cout << "Enter one sales item:\n";
  std::cin >> item;
  std::cout << item << std::endl;
  return 0;
}