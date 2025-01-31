#include <iostream>

/* this program will ask the user to enter a starting temperature and ending
 * temperature the program will then calculate corresponding velocity of sound
 * for the specified temperature.
 */

using namespace std;

int main() {
  double starting_temperature = 0;
  double ending_temperature = 0;
  double end = 0;
  double begin = 0;
  double velocity = 0;

  cout << "Please enter a starting temperature in Celsius. " << endl;
  cin >> starting_temperature;

  cout << "Please enter an ending temperature in Celsius. " << endl;
  cin >> ending_temperature;

  end = ending_temperature - starting_temperature;

  while (begin <= end) {
    velocity = 331.3 + 0.61 * starting_temperature;
    cout << "At " << starting_temperature
         << " Celsius the velocity of sound is " << velocity << " m/s" << endl;
    starting_temperature++;
    begin++;
  }

  return 0;
}
