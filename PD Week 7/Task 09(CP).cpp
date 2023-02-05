#include <iostream>
using namespace std;
main()
{
	int number;
	cout << "Enter number of lines: ";
	cin >> number;
	for (int i = 1; i <= number; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			cout << "*";
		}
		for (int j = number; j > i; j--)
		{
			cout << " ";
		}

		for (int j = number; j > i; j--)
		{
			cout << " ";
		}

		for (int j = 1; j <= i; j++)
		{
			cout << "*";
		}

		
		//for (int j = i; j >= 0; j--)
		//{
		//	cout << " ";
		//}
		//for (int j = 1; j <= i; j++)
		//{
			//cout << "*";
		//}

		cout << endl;		
	}	
}