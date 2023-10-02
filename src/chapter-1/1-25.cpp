#include "Sales_item.h"

#include <iostream>

int main() {
  std::cout << "(press Ctrl+D to stop)\nEnter some grouped items:\n";
  Sales_item total;
  if(std::cin >> total) {
    Sales_item trans;
    while(std::cin >> trans) {
      if(total.isbn() == trans.isbn())
        total += trans;
      else {
        std::cout << total << std::endl;
        total = trans;
      }
    }
    std::cout << total << std::endl;
  } else {
    std::cerr << "No data?!" << std::endl;
    return -1;
  }
  return 0;
}