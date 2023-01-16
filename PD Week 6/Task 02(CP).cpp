#include <iostream>
using namespace std;
float percentage(int total_marks);
string grade(float Percentage);
main()
{
	string name,Grade;
	int English,Chemistry,total_marks;
	int Maths, Social_Science, Biology;
	float Percentage;
	cout << "Enter student's name: ";
	cin >> name;
	cout << "Enter English subject marks: ";
	cin >> English;
	cout << "Enter English subject marks: ";
	cin >> Chemistry;
	cout << "Enter Chemistry subject marks: ";
	cin >> Maths;
	cout << "Enter Maths subject marks: ";
	cin >> Social_Science;
	cout << "Enter Social_Science subject marks: ";
	cin >> Biology;
	total_marks = English + Chemistry + Maths + Social_Science + Biology;
	Percentage=percentage(total_marks);
	Grade=grade(Percentage);
	cout <<"Student Name : " << name<<endl;
	cout << "Total Marks: " << total_marks<<endl;
	cout << "Student's Percentage is: " << Percentage<<endl;
	cout << "Student's Grade is: " << Grade<<endl;

}
float percentage(int total_marks)
{
float Percentage;
	Percentage=(100*total_marks) / 500;
	return Percentage;
}
string grade(float Percentage)
{
	string Grade;
	if (Percentage >= 90 && Percentage <= 100)
	{
		Grade = "A +";
		return Grade;
	}
	else if (Percentage >= 80 && Percentage <= 90)
	{
		Grade = "A";
		return Grade;
	}
	else if (Percentage >= 70 && Percentage <= 80)
	{
		Grade = "B+";
		return Grade;
	}
	else if (Percentage >= 60 && Percentage <= 70)
	{
		Grade = "B";
		return Grade;
	}
	else if (Percentage >= 50 && Percentage <= 60)
	{
		Grade = "C";
		return Grade;
	}
	else if (Percentage >= 40 && Percentage <= 50)
	{
		Grade = "D";
		return Grade;
	}
	else if (Percentage < 40)
	{
		Grade = "F";
		return Grade;
	}
}