#include <iostream>
using namespace std;
void nestedForExample(int rows);
main()
{
	int rows;
	cout << "Enter number of rows: ";
	cin >> rows;
	nestedForExample(rows);
}
void nestedForExample(int rows)
{
	for (int i = rows; i >= 0; i--)
	{
		for (int j = i; j >= 0; j--)
		{
			cout << "*";
		}
		cout << endl;
	}
}