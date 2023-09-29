// GNU naming conventions

// system/compiler libraries headers
#include <iostream>

// local libraries headers
// #include "something.hpp"

// functions and methods
void calculate_average();
void open_file_stream();

// classes and structures
class MyClassName {
  // ...
};

struct MyStructName {
  // ...
};

// enums
enum DaysOfWeek {
  Sunday,
  Monday,
  Tuesday,
  Wednesday,
  Thursday,
  Friday,
  Saturday
};

// namespaces
namespace my_namespace {
// ...
} // namespace my_namespace

// macros
#define PI 3.14159265359

// source code files
// my_source_file.cpp
// my-source-file.cpp
// utility_functions.hpp
// utility-functions.hpp

int main() {
  // variables
  int my_variable = 1;
  double average_value = 1.0;

  // constants
  const int MAX_VALUE = 100;

  std::cout << my_variable << ' ' << average_value << ' ' << MAX_VALUE << ' '
            << PI << std::endl;
  return 0;
}