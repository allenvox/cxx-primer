#include <iostream>

int main() {
  // 4.37
  int i = 0;
  double d = 0;
  std::string str("some string");
  const std::string *ps = &str;
  char c = 'c';
  char *pc = &c;
  void *pv;
  // pv = (void*)ps;
  pv = static_cast<void *>(const_cast<std::string *>(ps));
  // pv = const_cast<std::string *>(ps);  // second way
  i = static_cast<int>(*pc);    // i = int(*pc);
  pv = static_cast<void *>(&d); // pv = &d;
  pc = static_cast<char *>(pv); // pc = (char*)pv;

  // 4.38
  // double slope = static_cast<double>(j / i);
  // first - divide int j / int i => int result
  // second - convert int result to double result
  // expression is same as double slope = j / i;
  return 0;
}