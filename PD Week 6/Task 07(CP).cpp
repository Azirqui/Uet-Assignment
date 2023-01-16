#include <iostream>
using namespace std;
main()
{
	int starting_hour;
	int starting_min;
	int arrival_hour;
	int arrival_min;
	float minutes;
	float hours;
	cout << "Enter exam starting time(hours): ";
	cin >> starting_hour;
	cout << "Enter exam starting time(minutes): ";
	cin >> starting_min;
	cout << "Enter arrival time(hours): ";
	cin >> arrival_hour;
	cout << "Enter arrival time(minutes): ";
	cin >> arrival_min;
	int total_min_arrival;
	int total_min_starting;
	int min_difference;
	int total_hours;
	int total_minutes;
	total_min_starting = (starting_hour * 60) + starting_min;
	total_min_arrival = (arrival_hour * 60) + arrival_min;
	min_difference= total_min_arrival-total_min_starting;
    total_hours=min_difference / 60;
	total_minutes = min_difference % 60;
	if (min_difference >= -30 && min_difference <=0)
	{
		cout << "On Time"<<endl;
	}
	else if (min_difference <-30)
	{
		cout << "Early"<<endl;
	}
	else if (min_difference > 0)
	{
		cout << "Late" << endl;
	}
	if (min_difference > -60 && min_difference <0)
	{
		cout << -total_minutes << " minutes before the start." << endl;
	}
	else if (min_difference <= -60)
	{
		cout <<-total_hours<<":"<<-total_minutes << " minutes before the start." << endl;
	}
	else if (min_difference < 60 && min_difference >0)
	{
		cout <<total_minutes << " minutes after the start." << endl;
	}
	else if (min_difference >= 60)
	{
		cout << total_hours << ":" << total_minutes << " after the start." << endl;
	}
}