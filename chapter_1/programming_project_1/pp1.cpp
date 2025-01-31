#include <iostream>

using namespace std;

int calculate_sum(int x, int y) 
{
	return x + y;
}

int calculate_product(int x, int y)
{
	return x * y;
}


int main() 
{
	int x = 0;
	int y = 0;

	cout << "This program will calculate both the product and sum of two numbers entered by the user" << endl;
	cout << endl;
	
	cout << "Please enter the value for the first number." << endl;
	cin >> x;
	cout << endl;
	cout << "You entered " << x << endl;
	cout << endl;

	cout << "Please enter the value for the second number." << endl;
	cin >> x;
	cout << endl;
	cout << "You entered " << y << endl;
	cout << endl;

	int sum = calculate_sum(x,y);
	int product = calculate_product(x,y);

	cout << "Sum of the two numbers " << sum << endl;
	cout << "Prodcut of the two numbers " << product << endl;

	return 0;

}
