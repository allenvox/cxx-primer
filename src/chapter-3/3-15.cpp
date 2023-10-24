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
  for (auto s : svec) {
    std::cout << s << ' ';
  }
  std::cout << '\n';
  return 0;
}