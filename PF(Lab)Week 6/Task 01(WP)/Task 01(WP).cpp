#include <iostream>
using namespace std;
char calcGrade(int Marks);
main()
{
	int marks;
	char Grade;
	cout <<"Enter Number: ";
	cin >> marks;
	Grade=calcGrade(marks);
	cout << "Grade is: " << Grade;
}
char calcGrade(int Marks)
{
	char Grade;
	if (Marks < 50)
	{
		Grade = 'F';
		return Grade;
	}
	else if (Marks >= 50 && Marks <=60)
	{
		Grade = 'E';
		return Grade;
	}
	else if (Marks >= 61 && Marks <= 70)
	{
		Grade = 'D';
		return Grade;
	}
	else if (Marks >= 71 && Marks <= 80)
	{
		Grade = 'C';
		return Grade;
	}
	else if (Marks >= 81 && Marks <= 85)
	{
		Grade = 'B';
		return Grade;
	}
	else
	{
		Grade = 'A';
		return Grade;
	}
	return 0;
}