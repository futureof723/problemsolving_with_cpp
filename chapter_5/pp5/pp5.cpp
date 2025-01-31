#include <cmath>
#include <iostream>
#include <stdexcept>

// this program calculates wind chill

double windchill_index(double windspeed, double temperature) {
  double calculation = 0;

  if (temperature >= 10) {
    throw std::runtime_error("temperature must be greater than 10");
  } else {
    calculation = (13.12) + (0.6215 * temperature) +
                  (-11.37 * pow(windspeed, 0.16)) +
                  (0.3965 * temperature * pow(windspeed, 0.016));
  }
  return calculation;
}

int main() {
  using namespace std;

  double temperature;
  double windspeed;

  cout << "This program is used to calculate wind speed." << endl;
  cout << "Please enter a temperature in celsius. The temperature must be "
          "below 10."
       << endl;
  cin >> temperature;

  cout << "Please enter a wind speed in m/s" << endl;
  cin >> windspeed;

  cout << "The wind chill is " << windchill_index(windspeed, temperature)
       << endl;
}
