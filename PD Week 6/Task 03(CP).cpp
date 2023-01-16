#include <iostream>
using namespace std;
string zodiac_signs(int date, string month);
main()
{
	int date;
	string month,result;
	cout << "Enter your date: ";
	cin >> date;
	cout << "Enter your month: ";
	cin >> month;
	result=zodiac_signs(date,month);
	cout << result;	
}
string zodiac_signs(int date, string month)
{
	string result;
	if ((month == "March" && date >= 21) || (month == "April" && date <= 19))
	{
		result="Aries";
		return result;
	}
	else if ((month == "April" && date >= 20) || (month == "May" && date <= 20))
	{
		result = "Taurus";
		return result;
	}
	else if ((month == "May" && date >= 21) || (month == "June" && date <= 20))
	{
		result = "Gemini";
		return result;
	}
	else if ((month == "June" && date >= 21) || (month == "July" && date <= 22))
	{
		result = "Cancer";
		return result;
	}
	else if ((month == "July" && date >= 23) || (month == "August" && date <= 22))
	{
		result = "Leo";
		return result;
	}
	else if ((month == "August" && date >= 23) || (month == "September" && date <= 22))
	{
		result = "Virgo";
		return result;
	}
	else if ((month == "September" && date >= 23) || (month == "October" && date <= 22))
	{
		result = "Libra";
		return result;
	}
	else if ((month == "October" && date >= 23) || (month == "November" && date <= 21))
	{
		result = "Scorpio";
		return result;
	}
	else if ((month == "November" && date >= 22) || (month == "December" && date <= 21))
	{
		result = "Sagittarius";
		return result;
	}
	else if ((month == "December" && date >= 22) || (month == "January" && date <= 19))
	{
		result = "Capricorn";
		return result;
	}
	else if ((month == "January" && date >= 20) || (month == "February" && date <= 18))
	{
		result = "Aquarius";
		return result;
	}
	else if ((month == "February" && date >= 19) || (month == "March" && date <= 20))
	{
		result = "Pisces";
		return result;
	}
}