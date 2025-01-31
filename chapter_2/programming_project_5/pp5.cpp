#include <iostream>
#include <ostream>

using namespace std;

int main() {

  int total_people = 0;
  int max_size = 0;
  string answer = "";

  do {

    cout << "How many people are attending the event?" << endl;
    cin >> total_people;

    cout << "What is the maximum occupancy of said venue?" << endl;
    cin >> max_size;

    if (total_people <= max_size) {
      cout << "This event is legal to host." << endl;
      cout << "You can actually invite " << (max_size - total_people)
           << " more people." << endl;
    } else if (total_people > max_size) {
      cout << "Too many people invited to the venue. This is illegal." << endl;
      cout << "Please uninvited " << (total_people - max_size) << " guests."
           << endl;
    }

    cout
        << "Would you like to validate the legallity of hosting an event? [y/n]"
        << endl;
    cin >> answer;

  } while (answer == "y");
  return 0;
}
