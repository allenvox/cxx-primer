#include <cstdint>
#include <iostream>

bool isAligned(void *ptr, size_t alignment) {
  return reinterpret_cast<uintptr_t>(ptr) % alignment == 0;
}

int main() {
  float f;
  double d;
  int i;
  char c;
  std::cout << "is float aligned? - " << isAligned(&f, sizeof(f));
  std::cout << "\nis double aligned? - " << isAligned(&d, sizeof(d));
  std::cout << "\nis int aligned? - " << isAligned(&i, sizeof(i));
  std::cout << "\nis char aligned? - " << isAligned(&c, sizeof(c));
  std::cout << std::endl;
  return 0;
}