#include <iostream>
using namespace std;
float Studio(string month, int stays);
float Apartment(string month, int stays);
main()
{
	string month;
	int stays;
	float Price, price;
	cout << "Enter month: ";
	cin >> month;
	cout << "Enter number of stays: ";
	cin >> stays;
	Price = Studio(month, stays);
	price = Apartment(month, stays);
	cout << "Apartment: " << price << "$"<<endl;
	cout << "Studio: " << Price << "$" << endl;
}
float Apartment(string month, int stays)
{
	float price,Actual;
  if (month == "May" || month == "October")
	{
		if (stays <= 14)
		{
			price=stays * 65;
			return price;
		}
		else if (stays > 14)
		{
			 Actual = stays * 65;
			 price = Actual - (Actual * 0.1);
			return price;
		}
	}
  if (month == "June" || month == "September")
  {
	  if (stays <= 14)
	  {
		  price = stays * 68.70;
		  return price;
	  }
	  else if (stays > 14)
	  {
		  Actual = stays * 68.70;
		  price = Actual - (Actual * 0.1);
		  return price;
	  }
  }
  if (month == "July" || month == "August")
  {
	  if (stays <= 14)
	  {
		  price = stays * 77;
		  return price;
	  }
	  else if (stays > 14)
	  {
		  Actual = stays * 77;
		  price = Actual - (Actual * 0.1);
		  return price;
	  }
  }
}
float Studio(string month, int stays)
{
	float Price, Actual;
	if (month == "May" || month == "October")
	{
		if (stays <= 7)
		{
			Price = stays * 50;
			return Price;
		}
		else if (stays > 7 && stays <= 14)
		{
			Actual = stays * 50;
			Price = Actual - (Actual * 0.05);
			return Price;
		}
		else if (stays > 14)
		{
			Actual = stays * 50;
			Price = Actual - (Actual * 0.3);
			return Price;
		}
	}
	if (month == "June" || month == "September")
	{
		if (stays <= 14)
		{
			Price = stays * 75.20;
			return Price;
		}
		else if (stays > 14)
		{
			Actual = stays * 75.20;
			Price = Actual - (Actual * 0.2);
			return Price;
		}
	}
	if (month == "July" || month == "August")
	{
		Price = stays*76;
		return Price;
	}
}