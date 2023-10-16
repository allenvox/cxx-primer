#include <string>

// 2.39
/* struct Foo { } // the rest here are items of struct Foo like int a, b

int main() {
  return 0;
}
*/

// 2.40
struct Sales_data {
  std::string ISBN;
  unsigned sold = 0;
  double revenue = 0.0;
};

int main() { return 0; }