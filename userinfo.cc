#include "userinfo.h"
#include <iostream>

bool IsInt(std::string input, int x) {
  for (int i = 0; i < input.length(); i++) {
    if (!isdigit(input.at(i))) {
      std::cout << "Invalid input, try again\n\n";
      return false;
    }
  }
  if (x < stoi(input)) {
          std::cout << "Invalid input, try again\n\n";

    return false;
  }
  return true;
}

