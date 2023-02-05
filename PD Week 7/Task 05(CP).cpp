#include <iostream>
using namespace std;
int Sequence_calc(int number);
main()
{
	int number,sum;
	cout << "Enter corresponding triangle number of the sequence: ";
	cin >> number;
	sum = Sequence_calc(number);
	cout << "Result is: " << sum;
}
int Sequence_calc(int number)
{
	int sum = 0;
	for (int i = 1; i <= number; i++)
	{
		sum = sum + i;
	}
	return sum;
}