#include <iostream>

using namespace std;

// Still needs some work. The last month payment is going into the negative

int main() {

  double debt = 1000;
  double interest_rate = 0.015;
  double monthly_payment = 50;
  double fee = 0;
  double fee_minus_monthly_payment = 0;
  double months = 0;
  double last_payment = 0;

  while (debt > 50) {
    cout << "DEBUG: months " << months << endl;
    fee = (debt * interest_rate);
    cout << "DEBUG: fee " << fee << endl;
    fee_minus_monthly_payment = monthly_payment - fee;
    cout << "DEBUG: fee_minus_monthly_payment " << fee_minus_monthly_payment
         << endl;
    debt = debt - fee_minus_monthly_payment;
    cout << "DEBUG: debt " << debt << endl;
    months++;
  }

  return 0;
}
