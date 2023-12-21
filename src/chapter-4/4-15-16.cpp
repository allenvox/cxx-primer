#include <iostream>

int *getPtr() {
  int *a = (int *)malloc(sizeof(int));
  return a;
}

int main() {
  // 4.15
  double dval;
  int ival;
  int *pi;
  // dval = ival = pi = 0; // can't assign address 0 to pi

  // 4.16
  int *p;
  // if (p = getPtr() != 0)
  if ((p = getPtr()) != 0) { // fixed
    std::cout << "p != 0\n";
  }

  // if (i = 1024)
  int i = 1024;
  if (i == 1024) { // fixed
    std::cout << "i = 1024\n";
  }

  return 0;
}