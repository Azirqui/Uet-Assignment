#include <iostream>
using namespace std;
float tele_company(char service_code,float minutes,char time);
main()
{
	char service_code;
	char time;
	float minutes;
	float charges;
	cout << "Which type of customer you are(Residential or Premium) select (r/p): ";
	cin >> service_code;
	cout << "Press 'D' for day time or Press 'N' for night time call: ";
	cin >> time;
	cout << "Enter number of minutes you used the service: ";
	cin >> minutes;
	charges = tele_company(service_code,minutes,time);
	cout << "The charges are: " << charges <<"$";
}
 float tele_company(char service_code,float minutes,char time)
{
	 float charges;
	if (service_code == 'r')
	{
		if (minutes <= 50)
		{
			charges = 10;
			return charges;
		}
		else if (minutes > 50)
		{
			charges=minutes * 0.20 + 10;
			return charges;
		}
	}
	if (service_code == 'p')
	{
		if (time == 'D')
		{
			if (minutes <= 75)
			{
				charges = 25;
				return charges;
			}
			else if (minutes > 75)
			{
				charges=0.10 * minutes+25;
				return charges;
			}
		}
		if (time == 'N')
		{
			if (minutes <= 100)
			{
				charges = 25;
				return charges;
			}
			else if (minutes > 100)
			{
				charges = 0.05 * minutes + 25;
				return charges;
			}
		}
	}
}