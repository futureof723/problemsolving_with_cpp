#include <cmath>
#include <iostream>
#include <ostream>

using namespace std;

// inputs being loan amount, interest rate, and loan duration
// outputs being loan amount - interest, and total monthly payments

int main() {
  double loan_amount = 0;
  double interest_rate = 0;
  double loan_duration_months = 0;

  cout << "Please enter the loan amount required " << endl;
  cin >> loan_amount;

  cout << "Please enter the interest rate " << endl;
  cin >> interest_rate;

  cout << "Please enter the loan duration " << endl;
  cin >> loan_duration_months;

  double loan_duration_to_decimal = loan_duration_months / 12;
  cout << "DEBUG: loan_duration_to_decimal " << loan_duration_to_decimal
       << endl;

  double interest = (loan_amount * (interest_rate * 0.01));
  cout << "DEBUG: interest " << interest << endl;

  double interest_over_time = interest * loan_duration_to_decimal;
  cout << "DEBUG: interest_over_time " << interest_over_time << endl;

  double interest_minus_loan_amout = loan_amount - interest_over_time;
  cout << "DEBUG: interest_minus_loan_amout " << interest_minus_loan_amout
       << endl;

  double face_value =
      (loan_amount /
       (1 - pow(1 + (interest_rate * 0.01), (loan_duration_to_decimal * -1)))) /
      (interest_rate * 0.01);
  cout << "DEBUG: face_value " << face_value << endl;

  return 0;
}
