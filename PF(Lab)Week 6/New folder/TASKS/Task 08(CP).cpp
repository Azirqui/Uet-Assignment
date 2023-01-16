#include <iostream>
using namespace std;
main()
{
	int number;
	int remainder;
	cout << "Enter the number: ";
	cin >> number;
	remainder=number % 2;
	if (remainder == 0)
	{
		cout << "Even";
	}
	else
	{
		cout << "Odd";
	}
}