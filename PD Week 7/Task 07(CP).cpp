#include <iostream>
using namespace std;
void percentage_calc(float number);
main()
{
	float number;
	cout << "Enter amount of numbers: ";
	cin >> number;
	percentage_calc(number);
}
void percentage_calc(float number)
{
	int num;
	int count1 = 0;
	int count2 = 0;
	int count3 = 0;
	float p1,p2,p3;
	for (int i = 1; i <= number; i++)
	{
		cout << "Enter number: ";
		cin >> num;
		if (num % 2 == 0)
		{
			count1++;
		}
		if (num % 3 == 0)
		{
			count2++;
		}
		if (num % 4 == 0)
		{
			count3++;
		}
	}
	p1 = (count1 / number) * 100;
	p2 = (count2 / number) * 100;
	p3 = (count3 / number) * 100;
	cout << "P1: " << p1 << "%" << endl;
	cout << "P2: " << p2 << "%" << endl;
	cout << "P3: " << p3 << "%" << endl;
}