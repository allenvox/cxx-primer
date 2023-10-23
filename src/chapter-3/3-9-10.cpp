#include <cctype>
#include <iostream>

int main() {
  // 3.9
  std::string s;
  std::cout << s[0]; // ok, s is empty, s[0] is 0 char

  // 3.10
  std::string s1;
  std::cout << "Enter a string with punctuation marks:\n";
  getline(std::cin, s1);
  for (char c : s1) {
    if (ispunct(c)) {
      continue;
    } else {
      std::cout << c;
    }
  }
  std::cout << '\n';
  return 0;
}