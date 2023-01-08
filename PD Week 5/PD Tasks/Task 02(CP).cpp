#include <iostream>
using namespace std;
float function(float height,float width,float length,string unit);

main()
{
	float height, width, length;
	string unit;
	float result;
	cout << "Enter height: ";
	cin >> height;
	cout << "Enter width: ";
	cin >> width;
	cout << "Enter lenght ";
	cin >> length;
	cout << "Enter Unit :";
	cin >> unit;
	result=function(height,width,length,unit);
	cout << "Volume is :" << result;
}
float function(float height,float width,float length, string unit)
{
	float volume,result;
	volume = (length * width * height) / 3;
	if (unit == "centimeters")
	{
		result = volume * 1000000;
		return result;
	}
	if (unit == "millimeters")
	{
		result = volume * 1000000000;
		return result;
	}
	if (unit == "kilometers")
	{
		result = volume / 1000000000;
		return result;
	}
	return 0;
}