#include <iostream>

void calculations(int &hour, int &minutes, int &waiting_hour,
                  int &waiting_minutes) {

  int total_minutes =
      (hour * 60) + minutes + (waiting_hour * 60) + waiting_minutes;

  std::cout << "Total_minutes " << total_minutes << std::endl;

  hour = (total_minutes / 60) % 24;
  std::cout << "Hour " << hour << std::endl;
  minutes = (total_minutes % 60);
  std::cout << "Minutes " << minutes << std::endl;
}

int main() {
  using namespace std;

  int hour;
  int minutes;
  int waiting_hour;
  int waiting_minutes;
  char answer;

  do {
    cout << "This program is used to calculate time after waiting" << endl;
    cout << "Please enter a time in 24-hour notation" << endl;
    cout << "Then enter the waiting period" << endl;
    cout << "The program will then display the time after waiting" << endl;

    cout << "What is the time in hours?" << endl;
    cin >> hour;

    cout << "What is the time in minutes?" << endl;
    cin >> minutes;

    cout << "How many hours will you be waiting? " << endl;
    cin >> waiting_hour;

    cout << "How many minutes will you be waiting? " << endl;
    cin >> waiting_minutes;

    calculations(hour, minutes, waiting_hour, waiting_minutes);

    cout << "The time after waiting will be " << hour << ":"
         << (minutes < 10 ? "0" : "") << minutes << endl;

    cout << "Would you like to go again?[Y/n]" << endl;
    cin >> answer;
    answer = std::tolower(answer);

  } while (answer == 'y');

  return 0;
}
