#include <iostream>
#include <ostream>

using namespace std;

int main() {
  double cost_of_item = 0;
  double num_years = 0;
  double rate_of_inflation = 0;

  cout << "This program finds the value of an item adjusted for inflation "
          "after a specified quantity of years.";

  cout << "What is the cost of the item?" << endl;
  cin >> cost_of_item;
  cout << "DEBUG: cost of item " << cost_of_item << endl;

  cout << "How many years? " << endl;
  cin >> num_years;
  cout << "DEBUG: num_years " << num_years << endl;

  cout << "What is the rate of inflation? " << endl;
  cin >> rate_of_inflation;
  cout << "DEBUG: rate_of_inflation " << rate_of_inflation << endl;

  double roi_as_fraction = rate_of_inflation * 0.01;

  int count = 0;
  while (count < num_years) {
    cost_of_item = (cost_of_item * roi_as_fraction) + cost_of_item;
    count++;
    cout << "DEBUG: cost_of_item " << cost_of_item << endl;
  }

  cout << "The cost of the item adjusted to inflation after" << num_years
       << " is " << cost_of_item << endl;

  return 0;
}
