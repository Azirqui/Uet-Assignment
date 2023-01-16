#include <iostream>
using namespace std;
float function(float price, string month, string day);
main()
{
	float price;
	string day;
	string month;
	float payable;
	cout << "Enter Price: ";
	cin >> price;
	cout << "Enter Month: ";
	cin >> month;
	cout << "Enter Day: ";
	cin >> day;
	payable = function(price, month, day);
	cout << "Payable: " << payable;

}
float function(float price, string month, string day)
{
	float discount, payable;
	if (day == "Sunday" && month == "October")
	{
		discount = price * 0.1;
		payable = price - discount;
		return payable;
	}

	else if (day == "Sunday")
	{
		discount = price * 0.05;
		payable = price - discount;
		return payable;
	}
	else{return price;
}
	
	
        return 0;
}
