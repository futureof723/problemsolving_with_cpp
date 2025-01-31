#include <cmath>
#include <iostream>

// This program will find the amount of diet soda able to be drank before dying.

using namespace std;

int main() {
  double mouse_weight = 0;
  double artificial_sweetner = 0;
  string no = "n";
  string again = "";

  do {

    cout << "Please enter the amount of sweetner in grams" << endl;
    cin >> artificial_sweetner;

    cout << "Please enter the weight of the mouse in grams." << endl;
    cin >> mouse_weight;

    double lethal_dose = (artificial_sweetner / mouse_weight);

    cout << "The amount required to be a lethal dose for a mouse is "
         << lethal_dose << " grams." << endl;

    double human_weight = 0;
    cout << "Enter the weight the human is trying to achieve in grams." << endl;
    cin >> human_weight;

    double lethal_dose_for_human = lethal_dose * human_weight;
    cout << "The lethal dose for a human is " << lethal_dose_for_human
         << " grams." << endl;

    double const soda_size = 350;

    double const percentage_sweetner = .001 * soda_size;

    cout << "The size of the soda in grams " << soda_size << endl;
    cout << "Amount in grams of sweetner in 1 can of soda "
         << percentage_sweetner << endl;

    double cans_allowed = lethal_dose_for_human / percentage_sweetner;

    cout << "The total amount of cans of diet soda allowed to drink before "
            "death "
            "is "
         << floor(cans_allowed) << endl;

    cout << "Would you like to repeate this program again? [Y/n]" << endl;
    cin >> again;
  } while (again != no);

  return 0;
}
