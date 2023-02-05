#include <iostream>
#include <cmath>
using namespace std;
void percentage_calc(int count_cargo);
main()
{
	int count_cargo;
	cout << "Enter count of cargo for transportation: ";
	cin >> count_cargo;
	percentage_calc(count_cargo);

}
void percentage_calc(int count_cargo)
{
	int num;
	float sum_cargo;
	int cargo_minibus=0;
	int cargo_truck=0;
	int cargo_train=0;
	float average_price;
	float per_cargo, per_truck, per_train;
	for (int i = 1; i <= count_cargo; i++)
	{
		cout << "Enter number: ";
		cin >> num;
		if (num <= 3)
		{
			cargo_minibus = cargo_minibus + num;
		}
		else if (num > 3 && num <= 11)
		{
			cargo_truck = cargo_truck + num;
		}
		else if (num >11)
		{
			cargo_train = cargo_train + num;
		}
	}
	sum_cargo = cargo_minibus + cargo_truck + cargo_train;
	average_price = (cargo_minibus * 200 + cargo_truck * 175 + cargo_train * 120) / sum_cargo;
	per_cargo = (cargo_minibus * 100) / sum_cargo;
	per_truck = (cargo_truck * 100) / sum_cargo;
	per_train = (cargo_train * 100) / sum_cargo;
	cout << "Average Price per ton of carried cargo: " << average_price << endl;
	cout << "Percentage of cargo by minubus: " << per_cargo << "%"<<endl;
	cout << "Percentage of cargo by truck : " << per_truck << "%"<<endl;
	cout << "Percentage of cargo by train : " << per_train << "%"<<endl;

}