#include <iostream>

using namespace std;

int main() {
  int dollars = 100;
  int quarters = 25;
  int dimes = 10;
  int nickels = 5;
  int pennies = 1;

  int usr_dollars = 0;
  int usr_quarters = 0;
  int usr_dimes = 0;
  int usr_nickels = 0;
  int usr_pennies = 0;

  cout << "This program will ask you to enter quanties for dollars, quarters, "
          "dimes, nickels, and pennies."
       << endl;
  cout << "The program will then output the value in cents" << endl;

  cout << "How many dollars?" << endl;
  cin >> usr_dollars;

  cout << "How many quarters?" << endl;
  cin >> usr_quarters;

  cout << "How many dimes?" << endl;
  cin >> usr_dimes;

  cout << "How many nickels?" << endl;
  cin >> usr_nickels;

  cout << "How many pennies?" << endl;
  cin >> usr_pennies;

  int total_pennies = (usr_dollars * dollars) + (usr_quarters * quarters) +
                      (usr_dimes * dimes) + (usr_nickels * nickels) +
                      (usr_pennies * pennies);

  cout << "You have " << usr_dollars << " dollars." << endl;
  cout << "You have " << usr_quarters << " quarters." << endl;
  cout << "You have " << usr_dimes << " dimes." << endl;
  cout << "You have " << usr_nickels << " nickels" << endl;
  cout << "You have " << usr_pennies << " pennies" << endl;
  cout << "Total value of all currency in cents " << total_pennies << endl;

  return 0;
}
