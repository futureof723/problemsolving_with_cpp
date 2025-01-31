#include <algorithm>
#include <cctype>
#include <iostream>

int main() {
  int start_time = 0;
  std::string day_of_week;
  int length_of_phone_call;
  double per_minute_regular_hours = 0.40;
  double per_minute_odd_hours = 0.25;
  double per_minute_weekend = 0.15;
  double total_cost = 0;
  char go_again;

  do {

    std::cout << "These are the hours and fees for phone calls: " << std::endl;
    std::cout << "Monday - Friday 8am - 6pm: " << per_minute_regular_hours
              << " per minute." << std::endl;
    std::cout << "Monday - Friday before 8am or after 6pm: "
              << per_minute_odd_hours << " per minute." << std::endl;
    std::cout << "Weekends anytime " << per_minute_weekend << " per minute."
              << std::endl;

    std::cout
        << "Please enter the time the phone call was started in military time. "
        << std::endl;
    std::cin >> start_time;

    std::cout << "Please enter the length of the phone call in minutes. "
              << std::endl;
    std::cin >> length_of_phone_call;

    std::cout << "Please select which day of the week the phone call was made"
              << std::endl;
    std::cout << "Mo) Monday" << std::endl;
    std::cout << "Tu) Tuesday" << std::endl;
    std::cout << "We) Wednesday" << std::endl;
    std::cout << "Th) Thursday" << std::endl;
    std::cout << "Fr) Friday" << std::endl;
    std::cout << "Sa) Saturday" << std::endl;
    std::cout << "su) Sunday" << std::endl;

    std::cin >> day_of_week;

    std::transform(day_of_week.begin(), day_of_week.end(), day_of_week.begin(),
                   [](unsigned char c) { return std::tolower(c); });

    if (day_of_week == "mo" || day_of_week == "tu" || day_of_week == "we" ||
        day_of_week == "th" || day_of_week == "fr") {
      if (start_time <= 8 || start_time >= 18) {
        total_cost = length_of_phone_call * per_minute_regular_hours;
        std::cout << "The total cost of the phone call is $" << total_cost
                  << std::endl;
      }

      if (start_time < 8 || start_time > 18) {
        total_cost = length_of_phone_call * per_minute_odd_hours;
        std::cout << "The total cost of the phone call is $" << total_cost
                  << std::endl;
      }
    }

    if (day_of_week == "sa" || day_of_week == "su") {
      total_cost = length_of_phone_call * per_minute_weekend;
      std::cout << "The total cost of the phone call is $" << total_cost
                << std::endl;
    }

    std::cout
        << "Would you like to calculate the cost of another phone call? [Y/n]"
        << std::endl;
    std::cin >> go_again;
    go_again = std::tolower(go_again);

  } while (go_again == 'y');

  return 0;
}
