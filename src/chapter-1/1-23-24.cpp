#include "Sales_item.h"

#include <iostream>

int main() {
  std::cout << "(press Ctrl+D to stop)\nEnter some grouped items:\n";
  Sales_item currItem, item;
  if (std::cin >> currItem) {
    int cnt = 1;
    while (std::cin >> item) {
      if (item.isbn() == currItem.isbn()) {
        ++cnt;
      } else {
        std::cout << currItem << " occurs " << cnt << " times\n";
        currItem = item;
        cnt = 1;
      }
    }
    std::cout << currItem << " occurs " << cnt << " times" << std::endl;
  }
  return 0;
}