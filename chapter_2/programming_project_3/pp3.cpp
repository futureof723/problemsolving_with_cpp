#include <iostream>
#include <string>

using namespace std;

int main() {
  double const pay_raise_percentage = 0.076;
  double salary = 0;
  string again = "";
  double months_retroactive_pay = 0;

  do {
    cout << "Enter your salary in dollars." << endl;
    cin >> salary;

    cout << "Your salary is " << salary << endl;

    cout << "How many months of retroactive pay does your raise encompass?"
         << endl;
    cin >> months_retroactive_pay;

    cout << "Your retroactive pay raise encompasses " << months_retroactive_pay
         << " months." << endl;

    double retroactive_salary = (salary / 12) * (months_retroactive_pay);

    cout << "The amount of salary this covers is " << retroactive_salary
         << endl;

    double retroactive_pay_due = retroactive_salary * pay_raise_percentage;
    cout << "Retroactive pay due is " << retroactive_pay_due << endl;

    double new_yearly_salary = salary + (salary * pay_raise_percentage);
    cout << "New yearly salary " << new_yearly_salary << endl;

    double new_monthly_salary = new_yearly_salary / 12.0;
    cout << "New monthly salary " << new_monthly_salary << endl;

    cout << "Would you like to go again?" << endl;
    cin >> again;

  } while (again != "n");

  return 0;
}
