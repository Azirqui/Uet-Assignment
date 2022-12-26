#include <iostream>
using namespace std;
main()
{
string name;
int subject1;
int subject2;
int subject3;
int subject4;
int subject5;
int sum;
float percentage;

cout <<"Enter Your Name: ";
cin >>name;
cout <<"Enter subject 01 marks: ";
cin >> subject1;
cout <<"Enter subject 02 marks: ";
cin >> subject2;
cout <<"Enter subject 03 marks: ";
cin >> subject3;
cout <<"Enter subject 04 marks: ";
cin >> subject4;
cout <<"Enter subject 05 marks: ";
cin >> subject5;
sum=(subject1+subject2+subject3+subject4+subject5);
percentage=(sum*100)/500;
cout <<"Your percentage: "<<percentage;
}