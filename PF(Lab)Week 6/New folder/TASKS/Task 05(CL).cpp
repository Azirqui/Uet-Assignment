#include <iostream>
using namespace std;
main()
{
	char going;
	char lecture;
	cout << "Do you have class today(press Y for yes): ";
	cin >> going;
	cout << "Are your friends going?(press Y for yes): ";
	cin >> lecture;
	if (going == 'y')
	{
		if (lecture == 'y')
		{
			cout << "You are also going.";
		}
	}
}