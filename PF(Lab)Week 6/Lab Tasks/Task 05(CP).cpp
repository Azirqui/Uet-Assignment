#include <iostream>
using namespace std;
float lowestPrice(int kilometers, string time);
main()
{
	int kilometers;
	string time;
	float price;
	cout << "Enter Number of kilometers: ";
	cin >> kilometers;
	cout << "Enter Time of Day: ";
	cin >> time;
	price=lowestPrice(kilometers,time);
	cout << "Lowest Price: "<<price;
}
float lowestPrice(int kilometers, string time)
{
	float price;
	if (kilometers < 20)
	{
		if (time == "day")
		{
			price = (kilometers * 0.79) + 0.70;
			return price;
		}
		else if (time == "night")
		{
			price = (kilometers * 0.79) + 0.70;
			return price;
		}
	}
	if (kilometers >= 20 && kilometers<100)
	{
		price = (kilometers * 0.09);
		return price;
	}
	if (kilometers >= 100)
	{
		price = (kilometers * 0.06);
		return price;
	}
	return 0;
}