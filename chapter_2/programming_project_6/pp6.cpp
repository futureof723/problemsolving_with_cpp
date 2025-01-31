#include <iostream>
#include <ostream>
#include <string>

using namespace std;

int main() {
  double hourly_pay = 16.78;
  double ss_tax = 0.06;
  double federal_tax = 0.14;
  double state_tax = 0.05;
  double union_dues = 10;
  double extra_dependants_charge = 0;
  double num_dependants = 0;
  string again = "";
  double hours = 0;
  double overtime_pay = 0;
  double standard_pay = 0;
  double total_tax_fraction = ss_tax + federal_tax + state_tax;
  double standard_hours = 0;
  double overtime_hours = 0;
  double pay_before_taxes = 0;
  double pay_after_taxes = 0;
  double pay_after_deductions = 0;

  cout << "This app is for payroll purposes. " << std::endl;

  cout << "Please enter your hours for the week. " << endl;
  cin >> hours;
  cout << "DEBUG: hours " << hours << endl;

  cout << "Please enter the number of dependants. " << endl;
  cin >> num_dependants;
  cout << "DEBUG: num_dependants " << num_dependants << endl;

  if (hours > 40) {
    standard_hours = 40;
    overtime_hours = hours - 40;
    cout << "DEBUG: standard_hours " << standard_hours << endl;
    cout << "DEBUG: overtime_pay " << overtime_hours << endl;
  } else {
    standard_hours = 40;
    overtime_hours = 0;
    cout << "DEBUG: standard_hours " << standard_hours << endl;
    cout << "DEBUG: overtime_pay " << overtime_hours << endl;
  }

  if (num_dependants >= 3) {
    extra_dependants_charge = 35;
    cout << "DEBUG: extra_dependants_charge " << extra_dependants_charge
         << endl;
  } else {
    extra_dependants_charge = 0;
    cout << "DEBUG: extra_dependants_charge " << extra_dependants_charge
         << endl;
  }

  standard_pay = (standard_hours * hourly_pay);
  cout << "DEBUG: standard_pay " << standard_pay << endl;

  overtime_pay = (overtime_hours * hourly_pay * 1.5);
  cout << "DEBUG: overtime_pay " << overtime_pay << endl;

  pay_before_taxes = standard_pay + overtime_pay;
  cout << "DEBUG: pay_before_taxes " << pay_before_taxes << endl;

  pay_after_taxes = pay_before_taxes - (pay_before_taxes * total_tax_fraction);
  cout << "DEBUG: pay_after_taxes " << pay_after_taxes << endl;

  pay_after_deductions = pay_after_taxes - extra_dependants_charge - union_dues;
  cout << "DEBUG: pay_after_deductions " << pay_after_deductions << endl;

  double ss_tax_calc = pay_before_taxes * ss_tax;
  double federal_tax_calc = pay_before_taxes * federal_tax;
  double state_tax_calc = pay_before_taxes * state_tax;
  double total_tax = ss_tax_calc + federal_tax_calc + state_tax_calc;
  double tax_due = total_tax + extra_dependants_charge + union_dues;

  cout << "State Tax " << ss_tax_calc << endl;
  cout << "Federal Tax " << federal_tax_calc << endl;
  cout << "Social Security Tax " << state_tax_calc << endl;
  cout << "Union Dues " << union_dues << endl;
  cout << "Total Taxes " << total_tax << endl;
  cout << "Total Taxes and Dues " << tax_due << endl;
  cout << "Extra Dependancy Charge " << extra_dependants_charge << endl;
  cout << "Pay Before Taxes and Dues " << pay_before_taxes << endl;
  cout << "Pay After Taxes and Dues " << pay_after_deductions << endl;

  return 0;
}
