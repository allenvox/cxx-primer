#include <iostream>

int main() {
  using std::string, std::cout, std::cin;

  // 4.23
  string s = "word";
  // this:
  // string pl = s + s[s.size() - 1] == 's' ? "" : "s";
  // equals to:
  // string pl = (((s + s[s.size() - 1]) == 's') ? "" : "s");
  // ERROR no match for ‘operator==’ between string & char
  // fix:
  string pl = s + ((s[s.size() - 1] == 's') ? "" : "s");

  // 4.24
  int grade;
  cout << "Enter grade (0 - 100): ";
  cin >> grade;

  // Right associative:
  cout << ((grade > 90) ? "High pass" : (grade < 60) ? "Fail" : "Pass");

  // Left associative.
  // error: operands to ?: have different types ‘const char*’ and ‘bool’
  // cout << (((grade > 90) ? "High pass" : (grade < 60)) ? "Fail" : "Pass");
  return 0;
}