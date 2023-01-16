#include <iostream>
using namespace std;
float checkCost(string city, string product,float quantity);
main()
{
	string city;
	string product;
	float quantity;
	float price;
	cout << "Enter City Name: ";
	cin >> city;
	cout << "Enter Product Name: ";
	cin >> product;
	cout << "Enter Quantity: ";
	cin >> quantity;
	price=checkCost(city,product,quantity);
	cout << "Price: " << price;
}
float checkCost(string city, string product, float quantity)
{
	float price;
	if (product == "coffee")
	{
		if (city == "Sofia")
		{
			price = 0.50 * quantity;
			return price;
		}
		else if(city == "Plovdiv")
		{
			price = 0.40* quantity;
			return price;
		}
		else if (city == "Varna")
		{
			price = 0.45 * quantity;
			return price;
		}
	}
	if (product == "water")
	{
		if (city == "Sofia")
		{
			price = 0.80 * quantity;
			return price;
		}
		else if (city == "Plovdiv")
		{
			price = 0.70 * quantity;
			return price;
		}
		else if (city == "Varna")
		{
			price = 0.70 * quantity;
			return price;
		}
	}
	if (product == "beer")
	{
		if (city == "Sofia")
		{
			price = 1.20 * quantity;
			return price;
		}
		else if (city == "Plovdiv")
		{
			price = 1.15 * quantity;
			return price;
		}
		else if (city == "Varna")
		{
			price = 1.10 * quantity;
			return price;
		}
	}
	if (product == "sweets")
	{
		if (city == "Sofia")
		{
			price = 1.45 * quantity;
			return price;
		}
		else if (city == "Plovdiv")
		{
			price = 1.30 * quantity;
			return price;
		}
		else if (city == "Varna")
		{
			price = 1.35 * quantity;
			return price;
		}
	}
	if (product == "peanuts")
	{
		if (city == "Sofia")
		{
			price = 1.60 * quantity;
			return price;
		}
		else if (city == "Plovdiv")
		{
			price = 1.50 * quantity;
			return price;
		}
		else if (city == "Varna")
		{
			price = 1.55 * quantity;
			return price;
		}
	}
	return 0;
}