#include <iostream>

std::string checkEndianness() {
  int num = 1;
  char *byte = reinterpret_cast<char *>(&num);
  if (byte[0] == 1) {
    return "Little Endian";
  } else {
    return "Big Endian";
  }
}

int main() {
  std::cout << "CPU's architecture is using " << checkEndianness() << std::endl;
  return 0;
}