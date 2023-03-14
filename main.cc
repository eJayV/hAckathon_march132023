// Esteban Vasco

#include <iostream>
#include "userinfo.h"
#include <cstdlib>
#include <thread>
#include <chrono>
#include <unistd.h>
#include <iomanip>

const double weeks_in_year{365.25 / 7};
const double weeks_in_month{365.25 / 12 / 7};
const double weeks_in_day{1 / 7};
const double average_weeks_lived{4732.00};



int main() {
  UsIn exists{};
    std::cout << "◻";
    std::cout << "◼";

  std::cout << "\nThis is a very productive app to visualize your\n"
            << "life span and in no way copies the somewhat famous\n"
            << "Life Calender...\n";
  sleep(1);
  std::cout << "\n";
  sleep(1);
  std::cout << "\n";
    sleep(1);
  std::cout << "\n";

  std::cout << "\nFirst I'm gonna need some info on you\n";
  std::string temp;
  do {
    std::cout << "\nEnter your birth year as a number: ";
    std::cin >> temp;
  } while (!IsInt(temp, 2023));
  exists.birth_year_ = std::stod(temp);
  do {
    std::cout << "\nEnter your birth month as a number: ";
    std::cin >> temp;
  } while (!IsInt(temp, 12));
  exists.birth_month_ = std::stod(temp);
  do {
    std::cout << "\nEnter your birth date as a number: ";
    std::cin >> temp;
  } while (!IsInt(temp, 31));
  exists.birth_day_ = std::stod(temp);

  exists.weeks_lived_ = (2022 - exists.birth_year_) * weeks_in_year + (3 - exists.birth_month_) * weeks_in_month + (13 - exists.birth_day_) * weeks_in_day;
  exists.weeks_left_ = average_weeks_lived - exists.weeks_lived_;
  exists.lived = exists.weeks_lived_ / average_weeks_lived * 100;
  exists.left = exists.weeks_left_ / average_weeks_lived * 100;

    sleep(1);
  std::cout << "\n";
  sleep(1);
  std::cout << "\n";
    sleep(1);
  std::cout << "\n";

  std::cout << "\nA very optimistic amount of time to live is 4,732 weeks";
  sleep(2);
  std::cout << "\n.";
  sleep(2);
  std::cout << "\n..";
  sleep(2);
  std::cout << "\n...";
  sleep(1);
  std::cout << std::setprecision(0) << std::fixed;
  std::cout << " You have used " << exists.lived << "% of your life\n";
  
  int lived_int = exists.weeks_lived_;
  int left_int = exists.weeks_left_;

while (lived_int > 0 || left_int > 0) {
  int i=0;
  while (i < 100 && lived_int > 0) {
    std::cout << "◼";
    lived_int--;
    i++;
        if (i == 100) {
      std::cout << "\n";
    }
  }
  while (i < 100 && left_int > 0) {
    left_int--;
    std::cout << "◻";
    i++;
    if (i == 100) {
      std::cout << "\n";
    }
  }
}
 std::cout << "\n";
  sleep(1);
  std::cout << "\n";
  sleep(1);
std::cout << "\nEvery week is a box, filled is used, empty is yet to live";
sleep(5);
  return 0;
}