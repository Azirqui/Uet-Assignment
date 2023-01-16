#include <iostream>
using namespace std;
string checkSpeed(float Speed);
main()
{
	float speed;
	string Display;
	cout << "Enter Speed:";
	cin >> speed;
	Display=checkSpeed(speed);
	cout <<Display;
}
string checkSpeed(float Speed)
{
	string Display;
	if (Speed <= 10)
	{
		Display="Slow";
		return Display;
	}
	else if (Speed > 10 && Speed <= 50)
	{
		Display = "Average";
		return Display;
	}
	else if (Speed > 50 && Speed <= 150)
	{
		Display = "Fast";
		return Display;
	}
	else if (Speed > 150 && Speed <= 1000)
	{
		Display = "Ultra Fast";
		return Display;
	}
	else if (Speed >1000)
	{
		Display = "Extremely Fast";
		return Display;
	}
	return 0;
}
