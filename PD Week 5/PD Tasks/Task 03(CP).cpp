#include <iostream>
using namespace std;
float taxCalculate(char type,float price);
main()
{
	float price;
	char type;
	float result;
	cout << "Enter vehical type :";
	cin >> type;
	cout << "Enter vehical price :";
	cin >> price;
	result=taxCalculate(type,price);
	cout << "The final price on a vehical of type " << type << " after adding tax is " << result<< "$";

}
float taxCalculate(char type, float price)
{
	float taxAmount;
	float final_price;
	if (type == 'M')
	{
		taxAmount = price * (0.6);
		final_price = price + taxAmount;
		return final_price;

	}
	if (type == 'E')
	{
		taxAmount = price * (0.8);
		final_price = price + taxAmount;
		return final_price;
	}
	if (type == 'S')
	{
		taxAmount = price * (0.1);
		final_price = price + taxAmount;
		return final_price;
	}
	if (type == 'V')
	{
		taxAmount = price * (1.2);
		final_price = price + taxAmount;
		return final_price;
	}
	if (type == 'I')
	{
		taxAmount = price * (1.5);
		final_price = price + taxAmount;
		return final_price;
		return 0;
	}
}