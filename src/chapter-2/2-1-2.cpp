#include <iostream>

int main() {
  // 2.1
  int a = 2147483647; // -2147483648 to 2147483647
  std::cout << "max int value = " << a << '\n';
  long b = 9223372036854775807; // -9223372036854775808 to 9223372036854775807
  std::cout << "max long value = " << b << '\n';
  long long c = 0; // -(2^63) to (2^63)-1
  std::cout << "max long long value = idk " << c << '\n';
  short d = 32767; // -32768 to 32767
  std::cout << "max short value = " << d << '\n';

  // 2.2
  double coef = 0.255551; // for accuracy
  int total = 100000;     // for easy handling and containing
  double monthly_payment = static_cast<double>(total) * coef;
  std::cout << "coef = " << coef << '\n';
  std::cout << "total = " << total << '\n';
  std::cout << "monthly_payment = " << monthly_payment << '\n';
  return 0;
}