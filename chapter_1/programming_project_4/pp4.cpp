#include <iostream>

/*
 * distance = (acceleration * time^2) / 2
 *
 * constant acceleration of 32 feet per second
 *
 */

using namespace std;

int time_squared(int x) { return x * x; }

int main() {
  int time = 0;
  int acceleration = 32;

  cout << "This program will allow user to enter a time in seconds and then "
          "outputs how far an object would drop if it is in freefall for that "
          "length of time"
       << endl;

  cout << "Enter a time in seconds: " << endl;
  cin >> time;

  cout << endl;
  cout << "Time in seconds " << time << endl;
  cout << "Acceleration in feet per second " << acceleration << endl;

  int timesqrd = time_squared(time);
  cout << "Time squared " << timesqrd << endl;

  int acc_times_time = (acceleration * timesqrd);
  cout << "acc_times_time " << acc_times_time << endl;

  int distance = (acc_times_time / 2);
  cout << "Distance in feet per second " << distance << endl;

  return 0;
}
