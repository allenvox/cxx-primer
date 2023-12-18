#include <iostream>

int main() {
  // 4.8
  // logical AND
  bool a = true, b = false;
  bool c = a && b; // b is only evaluated if a is true
  // logical OR
  bool d = a || b; // b is only evaluated if a is false
  // logical EQUAL
  bool e = a == b; // undefined

  // 4.9
  const char *cp = "Hello World";
  if (cp && *cp) {
    std::cout << "(const char *) cp != nullptr, cp[0] != '\\0'\n";
  }

  // 4.10
  int num = 0;
  std::cout << "Enter a number:\n";
  while(std::cin >> num && num != 42) {
    std::cout << "Ok, you've entered not 42. Go ahead:\n";
  }
  std::cout << "I hate 42\n";
  return 0;
}