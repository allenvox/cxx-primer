#include <iostream>

int main() {
  // 4.4
  std::cout << 12 / 3 * 4 + 5 * 15 + 24 % 4 / 2 << ' '
            << ((12 / 3) * 4) + (5 * 15) + ((24 % 4) / 2) << '\n';

  // 4.5
  std::cout << -30 * 3 + 21 / 5 << ' ' << -30 + 3 * 21 / 5 << ' '
            << 30 / 3 * 21 % 5 << ' ' << -30 / 3 * 21 % 4 << '\n';

  // 4.6
  std::cout << "Enter int: ";
  int in;
  std::cin >> in;
  std::string ans = in % 2 == 0 ? "even" : "odd";
  std::cout << in << " is " << ans << '\n';

  // 4.7
  // Overflow:
  // char ch = 10000;
  // short num1 = 10000000;
  // int num2 = 1000000000000000000000000;
  return 0;
}