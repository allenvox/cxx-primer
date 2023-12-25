#include <iostream>

int main() {
  using std::cout, std::cin;
  int grade;
  cout << "Enter students' grades (0 - 100):\n";
  while (cin >> grade) {
    // version 1: conditional operators
    cout << ((grade > 90)
                 ? "High pass"
                 : ((grade < 60) ? "Fail"
                                 : ((grade > 75) ? "Pass" : "Low pass")));
    cout << '\n';

    // version 2: if-else statements
    if (grade > 90) {
      cout << "High pass";
    } else if (grade < 60) {
      cout << "Fail";
    } else if (grade > 75) {
      cout << "Pass";
    } else {
      cout << "Low pass";
    }
    cout << '\n';
  }
  return 0;
}