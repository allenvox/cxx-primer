#include <iostream>

int main() {
  using std::cout;

  // 4.25
  // (‘q’)       = 00000000000000000000000001110001
  // (~‘q’)      = 11111111111111111111111110001110
  // (~'q' << 6) = 11111111111111111110001110000000
  int result = ~'q' << 6;
  cout << result << '\n';

  // 4.26
  // C++ standard doesn't specify size of integral types in bytes,
  // but specifies minimum ranges they must be able to hold
  // Minimum mange of unsigned int is 0 to 65535.
  // So if unsigned int adopted, the result is undefined.

  // 4.27
  unsigned long ul1 = 3, ul2 = 7;
  cout << (ul1 & ul2) << ' ' << (ul1 | ul2) << ' ' << (ul1 && ul2) << ' '
       << (ul1 || ul2) << '\n';
  return 0;
}