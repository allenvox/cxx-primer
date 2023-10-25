#include <iostream>
#include <vector>

int main() {
  using std::string;
  using std::vector;
  string in_s;
  vector<string> svec;
  std::cout << "Enter some strings:\n";
  while (getline(std::cin, in_s)) {
    svec.push_back(in_s);
  }
  std::cout << "Vector size is " << svec.size() << "\nContents are: ";
  for (auto s : svec) {
    std::cout << s << ' ';
  }
  std::cout << '\n';
  for (auto &s : svec) {
    for (auto &c : s) {
      c = toupper(c);
    }
  }
  std::cout << "Contents after toupper(): ";
  for (auto s : svec) {
    std::cout << s << ' ';
  }
  std::cout << '\n';
  return 0;
}