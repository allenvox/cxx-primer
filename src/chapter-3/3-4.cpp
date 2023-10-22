#include <iostream>

int main() {
  std::cout << "Enter two strings:\n";
  std::string s1, s2;
  getline(std::cin, s1);
  getline(std::cin, s2);
  if (s1 == s2) {
    std::cout << "Strings are equal\n";
  } else {
    std::cout << "Strings are not equal, ";
    if (s1 > s2) {
      std::cout << "#1";
    } else {
      std::cout << "#2";
    }
    std::cout << " is lexicographically bigger (alphabetically first)\n";
  }

  if (s1.length() == s2.length()) {
    std::cout << "Strings have same length";
  } else {
    std::cout << "Strings have different lengths, ";
    if (s1.length() > s2.length()) {
      std::cout << "#1";
    } else {
      std::cout << "#2";
    }
    std::cout << " is longer";
  }
  std::cout << std::endl;
  return 0;
}