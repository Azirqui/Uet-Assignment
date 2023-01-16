#include <iostream>
using namespace std;
main()
{
	int cost;
	string brand;
	cout << "Enter the cost of the dress: ";
	cin >> cost;
	cout << "Enter the brand of the dress: ";
	cin >> brand;
	if (cost < 1500)
	{
		if (brand == "MTJ")
		{
			cout << "Buy the dress.";
		}
	}
}