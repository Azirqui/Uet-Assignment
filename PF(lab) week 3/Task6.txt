#include <iostream>
using namespace std;
main()
{
string name;
float matric;
float intermediate;
float ecat;
float Ecat;
float Intermediate;
float Matric;
float Result;
float a;
float b;
float c;
cout <<"Enter your name: ";
cin >>name;
cout <<"Enter matric marks out of 1100: ";
cin >>matric;
cout <<"Enter intermediate marks out of 550: ";
cin >>intermediate;
cout <<"Enter Ecat marks: ";
cin >>ecat;
Ecat=(ecat/400)*100;
Intermediate=(intermediate/550)*100;
a=(50*Ecat/100);
b=(40*Intermediate/100); 
Matric=(matric*100/100);
c=(10*Matric/100);

Result=a+b+c;
cout <<"Result: "<<Result;
}
