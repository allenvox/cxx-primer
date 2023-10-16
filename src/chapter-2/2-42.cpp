#include "Sales_data.h"

#include <iostream>

int main() {
  Sales_data data;
  std::cout << "Enter one sales data:\n";
  double price = 0;
  std::cin >> data.ISBN >> data.sold >> price;
  data.revenue = data.sold * price;
  std::cout << data.ISBN << ' ' << data.sold << ' ' << data.revenue << "\n\n";

  Sales_data item1, item2, item3;
  std::cout << "Enter two sales data with the same ISBN:\n";
  std::cin >> item1.ISBN >> item1.sold >> price;
  item1.revenue = item1.sold * price;
  std::cin >> item2.ISBN >> item2.sold >> price;
  item2.revenue = item2.sold * price;
  std::cout << item1.ISBN << ' ' << item1.sold + item2.sold << ' '
            << item1.revenue + item2.revenue << "\n\n";

  Sales_data item, sum;
  std::cout << "(press Ctrl+D to end)\nEnter sales data with the same ISBN:\n";
  while (std::cin >> item.ISBN >> item.sold >> price) {
    sum.ISBN = item.ISBN;
    sum.sold += item.sold;
    sum.revenue += item.revenue;
  }
  std::cout << sum.ISBN << ' ' << sum.sold << ' ' << sum.revenue << "\n\n";

  std::cout << "(press Ctrl+D to stop)\nEnter some grouped items:\n";
  Sales_data currItem, item4;
  if (std::cin >> currItem.ISBN >> currItem.sold >> price) {
    int cnt = 1;
    while (std::cin >> item4.ISBN >> item4.sold >> price) {
      if (item4.ISBN == currItem.ISBN) {
        ++cnt;
      } else {
        std::cout << currItem.ISBN << ' ' << currItem.sold << ' '
                  << currItem.revenue << " occurs " << cnt << " times\n";
        currItem.ISBN = item4.ISBN;
        currItem.sold = item4.sold;
        currItem.revenue = item4.revenue;
        cnt = 1;
      }
    }
    std::cout << currItem.ISBN << ' ' << currItem.sold << ' '
              << currItem.revenue << " occurs " << cnt << " times\n";
  }
  return 0;
}