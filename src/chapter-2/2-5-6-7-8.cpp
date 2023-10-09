#include <iostream>

int main() {
  // 2.5
  std::cout << 'a' << '\n';   // char
  std::cout << L'a' << '\n';  // long
  std::cout << "a" << '\n';   // string
  std::cout << L"a" << '\n';  // wide char
  std::cout << 10 << '\n';    // int
  std::cout << 10u << '\n';   // unsigned
  std::cout << 10L << '\n';   // long
  std::cout << 10uL << '\n';  // unsigned long
  std::cout << 012 << '\n';   // octal
  std::cout << 0xC << '\n';   // hexadecimal
  std::cout << 3.14 << '\n';  // float
  std::cout << 3.14f << '\n'; // float
  std::cout << 3.14L << '\n'; // double
  std::cout << 10. << '\n';   // float
  std::cout << 10e-2 << '\n'; // exponent double -> 0.1

  // 2.6
  int month = 9, day = 7; // default int
  std::cout << month << ' ' << day << '\n';
  // month = 09; - wrong expression, 9 is not a digit in octal
  day = 07; // octal int 7 = 7
  std::cout << day << '\n';

  // 2.7
  std::cout << "Who goes with F\145rgus?\012"; // \145 is 'e', \012 is \n
  std::cout << 3.14e1L << '\n'; // 3.14 * exp 1 = 3.14 * 10 = 31.4 double
  // std::cout << 1024f << '\n'; - wrong, number without . is int
  std::cout << 3.14L << '\n'; // double

  // 2.8
  std::cout << "2\t\115\t\012"; // 2 (tab) M (tab) (newline)
  return 0;
}