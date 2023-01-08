#include <iostream>
using namespace std;
main()
{
	int hours;
	int days;
	int workers;
	int timefor_training,time_useable;
	int total_time,time_excess,time_needed;
	cout << "Enter the needed hours :";
	cin >> hours;
	cout << "Enter days the firm has :";
	cin >> days;
	cout << "Enter number of all workers :";
	cin >> workers;
	timefor_training = 10 * 0.1;
	time_useable = 10 - timefor_training;
	total_time = days * workers * time_useable;
	if (total_time > hours)
	{
		time_excess = total_time - hours;
		cout << "Yes! "<< time_excess <<" the hours left.";
	}
	if (total_time < hours)
	{
		time_needed = hours - total_time;
		cout << "Not enough time! " << time_needed << " hours needed.";
	}


}