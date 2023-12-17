#include <iostream>

int main() {
  // 4.1
  std::cout << 5 + 10 * 20 / 2 << '\n'; // 5 + ((10 * 20) / 2)

  // 4.2
  // (a) (* (vec.begin()))
  // (b) (* (vec.begin())) + 1

  // 4.3
  // Order of evaluation for most of the binary operators is left undefined to
  // give the compiler opportunities for optimization. This strategy presents a
  // trade-off between efficient code generation and potential pitfalls in the
  // use of the language by the programmer. I consider that an acceptable
  // trade-off
  return 0;
}