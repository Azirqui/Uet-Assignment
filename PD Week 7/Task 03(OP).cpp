#include <iostream>
using namespace std;
main()
{
	int rows;
	cout << "Enter desired number of rows: ";
	cin >> rows;
	for (int i = rows; i >= 0; i--)
	{
		for (int j = i; j > 0; j--)
		{
			cout << " ";
		}
		for (int j = i; j < rows; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
	for (int i = 1; i <= rows; i++)
	{
		for (int j = 1; j < i; j++)
		{
			cout << " ";
		}
		for (int j = rows; j >= i; j--)
		{
			cout << "*";
		}
		cout << endl;
	}
}