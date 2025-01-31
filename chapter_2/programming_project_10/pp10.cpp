#include <iostream>

using namespace std;

int main() {

  double count = 1;
  double sum = 0;
  double negative = 0;
  double both = 0;
  double number = 0;
  double sum_count = 0;
  double negative_count = 0;
  double both_count = 0;

  while (count <= 10) {
    cout << "Please enter a number, either negative or positive." << endl;
    cin >> number;

    if (number > 0) {
      sum = number + sum;
      cout << "DEBUG: sum " << sum << endl;
      sum_count++;
      cout << "DEBUG: sum_count " << sum_count << endl;
    }

    if (number <= 0) {
      negative = number + negative;
      cout << "DEBUG: negative " << negative << endl;
      negative_count++;
      cout << "DEBUG: negative_count " << negative_count << endl;
    }

    both = number + both;
    cout << "DEBUG: both " << both << endl;
    both_count++;
    cout << "DEBUG: both_count " << both_count << endl;

    count++;
  }

  cout << "Sum of all positive numbers " << sum << endl;
  cout << "The average of all positive numbers " << (sum / sum_count) << endl;
  cout << "Sum of all negative numbers " << negative << endl;
  cout << "The average of all negative numbers " << (negative / negative_count)
       << endl;
  cout << "Sum of all postive and negative numbers " << both << endl;
  cout << "The average of all positive and negative numbers "
       << (both / both_count) << endl;

  return 0;
}
