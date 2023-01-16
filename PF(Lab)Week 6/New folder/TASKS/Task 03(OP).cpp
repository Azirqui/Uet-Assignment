#include <iostream>
using namespace std;
main()
{
	int number;
	string name;
	cout << "Enter your name: ";
	cin >> name;
	cout << "Enter your marks: ";
	cin >> number;
	if (name == "Ali")
	{
		if (number == 501)
		{
			cout << "Congratulations Ali!";
		}
	}
}