#include <iostream>
#include <vector>

int main() {
  using std::cout;
  using std::vector;

  // 4.31
  cout << "Prefix increment: ";
  vector<int> ivec(5);
  vector<int>::size_type cnt = ivec.size();
  for (vector<int>::size_type ix = 0; ix != ivec.size(); ++ix, --cnt) {
    ivec[ix] = cnt;
    cout << cnt << ' ';
  }
  // result - 5, 4, 3, ...

  cout << "\nPostfix increment: ";
  for (vector<int>::size_type ix = 0; ix != ivec.size(); ix++, cnt--) {
    ivec[ix] = cnt;
    cout << cnt << ' ';
  }
  cout << '\n';
  // result - 0, INT_MAX, INT_MAX - 1, ...

  // 4.32
  constexpr int size = 5;
  int ia[size] = {1, 2, 3, 4, 5};
  for (int *ptr = ia, ix = 0; ix != size && ptr != ia + size; ++ix, ++ptr) {
    // ptr and ix have the same function - going through array
    // ptr is pointer, ix is index in array
    // choose one to use
    cout << *ptr << ' ';
  }
  cout << '\n';
  return 0;
}