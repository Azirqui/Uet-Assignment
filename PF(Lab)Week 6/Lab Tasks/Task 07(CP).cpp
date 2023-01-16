#include <iostream>
using namespace std;
 float function(float budget,string category,int num_people);
main()
{
	float budget;
	string category;
	int num_people;
	float result;
	cout << "Enter Your Budget: ";
	cin >> budget;
	cout << "Enter Category: ";
	cin >> category;
	cout << "Enter number of people: ";
	cin >> num_people;
	result = function(budget,category, num_people);
	if (result > 0)
	{
		cout << "Yes! You have " << result << " QR left.";
	}
	else
	{
		cout << "Not enough money! You need " << -result << " QR.";
	}

}
float function(float budget, string category, int num_people)
{
	float transportation,remaining,result;
	if (category == "VIP")
	{
		if (num_people >= 1 && num_people <= 4)
		{
			transportation=0.75 * budget;
			remaining=budget - transportation;
			if (remaining >= (499.99*num_people))
			{
				result = remaining - 499.99 * num_people;
				return result;
			}
			else {
				result = remaining- num_people * 499.99;
				return result;
			}
		}
		else if (num_people >= 5 && num_people <= 9)
		{
			transportation = 0.6 * budget;
			remaining = budget - transportation;
			if (remaining >= (499.99*num_people))
			{
				result = remaining - 499.99 * num_people;
				return result;
			}
			else {
				result =remaining- num_people * 499.99;
				return result;
			}
		}
		else if (num_people >= 10 && num_people <= 24)
		{
			transportation = 0.5 * budget;
			remaining = budget - transportation;
			if (remaining >= (499.99*num_people))
			{
				result = remaining - 499.99 * num_people;
				return result;
			}
			else {
				result =remaining- num_people * 499.99;
				return result;
			}
		}
		else if (num_people >= 25 && num_people <= 49)
		{
			transportation = 0.4 * budget;
			remaining = budget - transportation;
			if (remaining >= (499.99*num_people))
			{
				result = remaining - 499.99 * num_people;
				return result;
			}
			else{
				result =remaining- num_people * 499.99;
				return result;
			}
		}
		if (num_people >=50)
		{
			transportation = 0.25 * budget;
			remaining = budget - transportation;
			if (remaining >= (499.99*num_people))
			{
				result = remaining - 499.99 * num_people;
				return result;
			}
			else {
				result = remaining- num_people * 499.99;
				return result;
			}
		}
	}
	if (category == "Normal")
	{
		if (num_people >= 1 && num_people <= 4)
		{
			transportation = 0.75 * budget;
			remaining = budget - transportation;
			if (remaining >= (249.99*num_people))
			{
				result = remaining - 249.99*num_people;
				return result;
			}
			else {
				result = remaining- num_people * 249.99;
				return result;
			}
		}
		else if (num_people >= 5 && num_people <= 9)
		{
			transportation = 0.6 * budget;
			remaining = budget - transportation;
			if (remaining >= (249.99*num_people))
			{
				result = remaining - 249.99 * num_people;
				return result;
			}
			else {
				result = remaining- num_people * 249.99;
				return result;
			}
		}
		else if (num_people >= 10 && num_people <= 24)
		{
			transportation = 0.5 * budget;
			remaining = budget - transportation;
			if (remaining >= (249.99*num_people))
			{
				result = remaining - 249.99 * num_people;
				return result;
			}
			else {
				result =remaining- num_people * 249.99;
				return result;
			}
		}
		else if (num_people >= 25 && num_people <= 49)
		{
			transportation = 0.4 * budget;
			remaining = budget - transportation;
			if (remaining >= (249.99*num_people))
			{
				result = remaining - 249.99 * num_people;
				return result;
			}
			else {
				result =remaining- num_people * 249.99;
				return result;
			}
		}
		if (num_people >= 50)
		{
			transportation = 0.25 * budget;
			remaining = budget - transportation;
			if (remaining >= (249.99*num_people))
			{
				result = remaining - 249.99 * num_people;
				return result;
			}
			else {
				result =remaining- num_people * 249.99;
				return result;
			}
		}
	}
}