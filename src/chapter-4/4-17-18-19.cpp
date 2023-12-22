#include <iostream>
#include <vector>

int main() {
  // 4.17
  // ++i - prefix, increments operand, yields changed object as result
  // i++ - postfix, increments operand, yield a copy of original, unchanged
  // value as its result

  // 4.18 what if prefix increment
  // auto pbeg = v.begin();
  // print elements up to the first negative value
  // while (pbeg != v.end() && *beg >= 0) {
  //   cout << *pbeg++ << endl; // print the current value and advance pbeg
  //   cout << *(++pbeg) << endl; // advance pbeg, print pbeg value
  // }

  // 4.19
  int ival = 1;
  std::vector<int> vec{1, 0, 1};
  int *ptr = &ival;
  if (ptr != 0 && *ptr++) {
    std::cout << "ptr != nullptr, ptr != 0\n";
  }
  if (ival++ && ival) {
    std::cout << "ival != 0 and ival+1 != 0\n";
  }
  if (vec[ival++] <= vec[ival]) {
    std::cout << "vec[ival] <= vec[ival+1]\n";
  }
  return 0;
}