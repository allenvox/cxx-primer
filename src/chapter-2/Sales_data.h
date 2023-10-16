#pragma once

#include <string>

struct Sales_data {
  std::string ISBN;
  unsigned sold = 0;
  double revenue = 0.0;
};