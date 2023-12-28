#include <iostream>

int main() {
  using std::cout;
  cout << "void (nullptr_t):\t" << sizeof(std::nullptr_t) << " bytes\n";
  cout << "bool:\t\t\t" << sizeof(bool) << " bytes\n";
  cout << "char:\t\t\t" << sizeof(char) << " bytes\n";
  cout << "wchar_t:\t\t" << sizeof(wchar_t) << " bytes\n";
  cout << "char16_t:\t\t" << sizeof(char16_t) << " bytes\n";
  cout << "char32_t:\t\t" << sizeof(char32_t) << " bytes\n";
  cout << "short:\t\t\t" << sizeof(short) << " bytes\n";
  cout << "int:\t\t\t" << sizeof(int) << " bytes\n";
  cout << "long:\t\t\t" << sizeof(long) << " bytes\n";
  cout << "long long:\t\t" << sizeof(long long) << " bytes\n";
  cout << "float:\t\t\t" << sizeof(float) << " bytes\n";
  cout << "double:\t\t\t" << sizeof(double) << " bytes\n";
  cout << "long double:\t\t" << sizeof(long double) << " bytes\n";
  cout << "int8_t:\t\t\t" << sizeof(int8_t) << " bytes\n";
  cout << "uint8_t:\t\t" << sizeof(uint8_t) << " bytes\n";
  cout << "int16_t:\t\t" << sizeof(int16_t) << " bytes\n";
  cout << "uint16_t:\t\t" << sizeof(uint16_t) << " bytes\n";
  cout << "int32_t:\t\t" << sizeof(int32_t) << " bytes\n";
  cout << "uint32_t:\t\t" << sizeof(uint32_t) << " bytes\n";
  cout << "int64_t:\t\t" << sizeof(int64_t) << " bytes\n";
  cout << "uint64_t:\t\t" << sizeof(uint64_t) << " bytes\n";
  return 0;
}