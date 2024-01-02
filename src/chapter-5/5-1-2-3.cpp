#include <iostream>

int main() {
  // 4.1
  ; // NULL statement

  // 4.2
  { // Block (compound statement)
  }

  // 4.3
  int sum = 0, val = 1;
  // while (val <= 10 && (sum += val++)) ; // null statement
  while (val <= 10 && (sum += val, ++val))
    ; // rewritten with comma
  std::cout << "Sum of 1 to 10 inclusive is " << sum << '\n';
  return 0;
}