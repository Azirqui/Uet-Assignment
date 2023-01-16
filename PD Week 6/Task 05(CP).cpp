#include <iostream>
using namespace std;
float shopManagement(string fruit, string day,float number);
main()
{
	string fruit;
	string day;
	float number;
	float Price;
	cout << "Enter Fruit Type: ";
	cin >> fruit;
	cout << "Enter Day of Week: ";
	cin >> day;
	cout << "Enter number of kilograms: ";
	cin >> number;
	Price=shopManagement(fruit,day,number);
	cout << "Price is: "<<Price ;

}
float shopManagement(string fruit, string day,float number)
{
	float Price;
	if (day == "Monday" || day == "Tuesday" || day == "Wednesday" || day == "Thursday" || day == "Friday")
	{
		if (fruit == "banana")
		{
			Price = 2.50 * number;
			return Price;
		}
		if (fruit == "apple")
		{
			Price = 1.20 * number;
			return Price;
		}
		if (fruit == "orange")
		{
			Price = 0.85 * number;
			return Price;
		}
		if (fruit == "grapefruit")
		{
			Price = 1.45 * number;
			return Price;
		}
		if (fruit == "kiwi")
		{
			Price = 2.70 * number;
			return Price;
		}
		if (fruit == "pineapple")
		{
			Price = 5.50 * number;
			return Price;
		}
		if (fruit == "grapes")
		{
			Price = 3.85 * number;
			return Price;
		}
	}
	if (day == "Saturday" || day == "Sunday")
	{
		if (fruit == "banana")
		{
			Price = 2.70 * number;
			return Price;
		}
		if (fruit == "apple")
		{
			Price = 1.25 * number;
			return Price;
		}
		if (fruit == "orange")
		{
			Price = 0.90 * number;
			return Price;
		}
		if (fruit == "grapefruit")
		{
			Price = 1.60 * number;
			return Price;
		}
		if (fruit == "kiwi")
		{
			Price = 3.00 * number;
			return Price;
		}
		if (fruit == "pineapple")
		{
			Price = 5.60 * number;
			return Price;
		}
		if (fruit == "grapes")
		{
			Price = 4.20 * number;
			return Price;
		}
	}
	else
	{
		cout << "Error"<<endl;
	}
}