#include <iostream>

int main() {
  // 2.23
  // there is no direct way to check if pointer points to correct object
  // it can be done only when defining the pointer or checking in process

  // 2.24
  int i = 42;
  void *p = &i; // general (non-type) pointer, can point to any type of object
  // but we should cast to a specific type when using
  std::cout << static_cast<int *>(p);
  // long *lp = &i; // wrong - long and int might have different sizes in memory
  return 0;
}