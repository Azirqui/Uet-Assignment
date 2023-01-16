#include <iostream>
using namespace std;
string titleCheck(float age,char gender);
main()
{
	float age;
	char gender;
	string Gender;
	cout << "Enter age: ";
	cin >> age;
	cout << "Enter gender: ";
	cin >> gender;
	Gender = titleCheck(age, gender);
	cout << Gender;
}
string titleCheck(float age, char gender)
{
	string Gender;
	if (age >= 16 && gender=='m')
	{
		Gender = "Mr.";
		return Gender;
	}
	else if (age < 16 && gender == 'm')
	{
		Gender = "Master.";
		return Gender;
	}
	else if (age >= 16 && gender == 'f')
	{
		Gender = "Ms.";
		return Gender;
	}
	else if (age < 16 && gender == 'f')
	{
		Gender = "Miss.";
		return Gender;
	}
	return 0;
}