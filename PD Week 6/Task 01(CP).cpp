#include <iostream>
using namespace std;
string activity(string temperature,string humidity);
main()
{
	string temperature;
	string humidity;
	string result;
	cout << "Enter temperature: ";
	cin >> temperature;
	cout << "Enter humidity: ";
	cin >> humidity;
	result=activity(temperature,humidity);
	cout << result;
}
string activity(string temperature, string humidity)
{
	string result;
	if (temperature == "warm" && humidity == "dry")
	{
		result="Play tennis.";
		return result;
	}
	if (temperature == "warm" && humidity == "humid")
	{
		result = "Swim.";
		return result;
	}
	if (temperature == "cold" && humidity == "dry")
	{
		result = "Play basketball.";
		return result;
	}	
	if (temperature == "cold" && humidity == "humid")
	{
		result = "Watch tv.";
		return result;
	}
}
