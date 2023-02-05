#include <iostream>
using namespace std;
void calc_sequence(int number);
main()
{
	int number;
	cout << "Enter higher bound number: ";
	cin >> number;
	calc_sequence(number);
}
void calc_sequence(int number)
{
	for (int i = 1; i <= number; i++)
	{
		int j = i;
		if (i % 4 == 0)
		{ 
			j=j * 10;
		}
		
		cout << j << " ";
	}
	
}