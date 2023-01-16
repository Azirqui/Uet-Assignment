#include <iostream>
#include <cmath>
using namespace std;
float volleyball(int weekends_home, int holidays, string year);
main()
{
	int weekends_home;
	int holidays;
	string year;
	float total_play, result;
	cout << "Enter number of weekends: ";
	cin >> weekends_home;
	cout << "Enter number of holidays: ";
	cin >> holidays;
	cout << "Enter year detail: ";
	cin >> year;
	total_play = volleyball( weekends_home, holidays,year);
	result = floor(total_play);
	cout << result;
}
float volleyball(int weekends_home, int holidays, string year)
{
	float weekends_sofia, play_sofia;
	float play_holidays, play_hometown, total_play;
	if (year == "leap")
	{
		weekends_sofia = 48 - weekends_home;
		play_sofia = 3 * (weekends_sofia / 4);
		play_holidays = 2 * (holidays / 3);
		play_hometown = weekends_home;
		total_play = (play_sofia + play_holidays + play_hometown)+ (play_sofia + play_holidays + play_hometown)*0.15;
		return total_play;
	}
	else if (year == "normal")
	{
		weekends_sofia = 48 - weekends_home;
		play_sofia = 3 * (weekends_sofia / 4);
		play_holidays = 2 * (holidays / 3);
		play_hometown = weekends_home;
		total_play = play_sofia + play_holidays + play_hometown;
		return total_play;
	}

}