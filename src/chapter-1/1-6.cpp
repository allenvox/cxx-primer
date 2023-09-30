#include <iostream>

int main() {
  int v1 = 2, v2 = 3;

  /* bad code - std::cout is no longer available on line 5
  std::cout << "The sum of " << v1;
            << " and " << v2;
            << " is " << v1 + v2 << std::endl;
  */

  // working code
  std::cout << "The sum of " << v1
            << " and " << v2
            << " is " << v1 + v2 << std::endl;

  return 0;
}