#include <iostream>

int main() {
  // 1.9 with for loop
  int sum = 0;
  for (int val = 50; val <= 100; ++val) {
    sum += val;
  }
  std::cout << "Sum of all values from 50 to 100 equals to " << sum << '\n';

  // 1.10 with for loop
  for (int i = 10; i >= 0; --i) {
    std::cout << i << ' ';
  }
  std::cout << '\n';

  // 1.11 with for loop
  std::cout << "Enter two int values:\n";
  int a, b;
  std::cin >> a >> b;
  if (a > b) {
    int temp = a;
    a = b;
    b = temp;
  }
  for (; a <= b; ++a) {
    std::cout << a << ' ';
  }
  std::cout << std::endl;
  return 0;
}