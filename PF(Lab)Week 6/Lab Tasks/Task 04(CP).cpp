#include <iostream>
using namespace std;
float totalIncome(string type, int rows, int columns);
main()
{
	int rows;
	int columns;
	string type;
	float income;
	cout << "Enter Number of rows: ";
	cin >> rows;
	cout << "Enter Number of columns: ";
	cin >> columns;
	cout << "Enter type of ticket: ";
	cin >> type;
	income=totalIncome(type, rows, columns);
	cout << "Income is: " << income << " Euros";
}
float totalIncome(string type, int rows, int columns)
{
	float income;
	int seats;
	seats = rows * columns;
	if (type == "Normal")
	{
		income = seats * 7.50;
		return income;
	}
	else if (type == "Premiere")
	{
		income = seats * 12.00;
		return income;
	}
	else if (type == "Discount")
	{
		income = seats * 5.00;
		return income;
	}

}