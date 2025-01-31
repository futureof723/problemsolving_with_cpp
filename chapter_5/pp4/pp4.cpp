#include <iostream>

void input(int &number) {
  using namespace std;
  cout << "This program asks to input a value between 0 and 99" << endl;
  cout << "The output will be the amount of quarters dimes, and pennies"
       << endl;
  cout << "For example 86 will be 3 quarters, 1 dime, and 1 penny" << endl;
  cout << "Please enter a number: " << endl;
  cin >> number;
}

void calculateChange(int amount, int &quarters, int &dimes, int &pennies) {
  using namespace std;
  int numQuarters = amount / 25;
  cout << "Number of quarters " << numQuarters << endl;
  amount = amount % 25;
  cout << "Amount " << amount << endl;

  int numDimes = amount / 10;
  cout << "Number of dimes " << numDimes << endl;
  amount = amount % 10;
  cout << "amount " << amount << endl;

  int numPennies = amount / 1;
  cout << "Number of pennies " << numPennies << endl;
  amount = amount % 1;
  cout << "amount " << amount << endl;
}

int main() {
  using namespace std;
  int total;
  int quarters;
  int dimes;
  int pennies;

  input(total);
  calculateChange(total, quarters, dimes, pennies);

  return 0;
}
