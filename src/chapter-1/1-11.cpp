#include <iostream>

int main() {
  std::cout << "Enter two int values:\n";
  int a, b;
  std::cin >> a >> b;
  if(a > b) {
    int temp = a;
    a = b;
    b = temp;
  }
  while(a <= b) {
    std::cout << a << ' ';
    ++a;
  }
  std::cout << std::endl;
  return 0;
}