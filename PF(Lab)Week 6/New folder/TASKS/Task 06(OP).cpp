#include <iostream>
using namespace std;
int isGreater(int number1, int number2, int number3);
main()
{
	int num1;
	int num2;
	int num3;
	int result;
	cout << "Enter number 1: ";
	cin >> num1;
	cout << "Enter number 2: ";
	cin >> num2;
	cout << "Enter number 3: ";
	cin >> num3;
	result = isGreater(num1, num2, num3);
	cout << "Answer: " << result;

}
int isGreater(int number1, int number2, int number3)
{
	int result;
	if (number1 > number2) 
	{
		if (number1 > number3)
		{
		   result = number1;
		   return result;
		}
	}
	if (number2 > number1) 
	{
		if (number2 > number3)
		{
		   result = number2;
		   return result;
		}
}
	if (number3 > number1)
	{
		if (number3 > number2)
		{
			result = number3;
			return result;
		}
	}
	else
	{
		result = number3;
		return result;
	}
	return 0;
}