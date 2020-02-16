#include <iostream>

using namespace std;

int main()
{
	// FIELDS

	int x = 0;
	int y = 0;
	int sum = 0;

	// OUTPUT

	cout << "Type first number: ";
	cin >> x;

	cout << "Type second number: ";
	cin >> y;

	sum = x + y;
	cout << "Sum is: " << sum;

	return 0;
}
