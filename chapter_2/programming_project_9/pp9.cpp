#include <iostream>

using namespace std;

int main() {

  double count = 1;
  double sum = 0;
  double negative = 0;
  double both = 0;
  double number = 0;

  while (count <= 10) {
    cout << "Please enter a number, either negative or positive." << endl;
    cin >> number;

    if (number > 0) {
      sum = number + sum;
      cout << "DEBUG: sum " << sum << endl;
    }

    if (number <= 0) {
      negative = number + negative;
      cout << "DEBUG: negative " << negative << endl;
    }

    both = number + both;
    cout << "DEBUG: both " << both << endl;

    count++;
  }

  cout << "Sum of all positive numbers " << sum << endl;
  cout << "Sum of all negative numbers " << negative << endl;
  cout << "Sum of all postive and negative numbers " << both << endl;

  return 0;
}
