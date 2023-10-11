#include <iostream>

int main() {
  // 2.25
  // int *ip, &r = ip; // bad reference - can point only to int, not int*
  // int i, *ip = 0; // 0=NULL? nullptr? not clearly defined
  // int* ip, ip2; // ip - int*, ip2 - int

  // 2.26
  // const int buf; // wrong - uninitialized const
  int cnt = 0;
  const int sz = cnt;
  ++cnt;
  // ++sz; // wrong - can't change constant
  std::cout << sz << ' ' << cnt << std::endl;
  return 0;
}