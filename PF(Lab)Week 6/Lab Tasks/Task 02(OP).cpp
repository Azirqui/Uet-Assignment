#include <iostream>
using namespace std;
bool sameNumber(int num1,int num2,int num3);
main()
{
	int number1;
	int number2;
	int number3;
	bool Result;
	cout << "Enter First Number: ";
	cin >> number1;
	cout << "Enter Second Number: ";
	cin >> number2;
	cout << "Enter Third Number: ";
	cin >> number3;
	Result=sameNumber(number1, number2, number3);
	if (Result == true)
	{
		cout << "Yes";
	}
	else if(Result ==false)
	{
		cout << "No";
	}
}
bool sameNumber(int num1,int num2,int num3)
{
	if (num1 == num2 && num2 == num3)
	{
		return true;
	}
	else
	{
		return false;		
	}
		return 0;
}