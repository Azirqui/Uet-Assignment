#include <iostream>
using namespace std;
int isGreater(int number1, int number2);
main()
{
	int num1;
	int num2;
	int result;
	cout << "Enter number 1: ";
	cin >> num1;
	cout << "Enter number 2: ";
	cin >> num2;
	result = isGreater(num1, num2);
	cout << "Answer: " << result;

}
int isGreater(int number1, int number2)
{
	int result;
	if (number1 > number2)
	{
			result = number1;
			return result;
	}
	else
	{
		result = number2;
		return result;
	}
	return 0;
}