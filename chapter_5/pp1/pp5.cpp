#include <cctype>
#include <iostream>

void input(int &hour, int &minutes) {
  using namespace std;
  cout << "This program will convert 24-hour notation to 12-hour notation"
       << endl;
  cout << "Please enter the time as two integers. One for the hour and one for "
          "the minutes"
       << endl;
  cout << "Please enter the hour" << endl;
  cin >> hour;
  cout << "Please enter the minutes" << endl;
  cin >> minutes;
}

void calculations(int &hour, int &minutes, char &am_or_pm) {
  if (hour > 12) {
    hour = hour - 12;
    am_or_pm = 'P';
  } else if (hour <= 12) {
    am_or_pm = 'A';
  }
}

void output(int hour, int minutes, char am_or_pm) {
  using namespace std;
  cout << "The time is " << hour << ":" << minutes << " " << am_or_pm << endl;
}

int main() {
  int hour, minutes;
  char am_or_pm;
  char answer;
  using namespace std;

  do {
    input(hour, minutes);
    calculations(hour, minutes, am_or_pm);
    output(hour, minutes, am_or_pm);

    cout << "Would you like to go again? [Y/n]" << endl;
    cin >> answer;
    answer = std::tolower(answer);
  } while (answer == 'y');

  return 0;
}
