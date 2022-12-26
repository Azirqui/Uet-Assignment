#include <iostream>
using namespace std;
main()
{
int num;
int x;
int y;
int z;
int t;
int result;

cout <<"Enter four digit num: ";
cin>>num;
x=num%10;
y=(num/10)%10;
z=(num/100)%10;
t=(num/1000)%10;
result=t+x+y+z;
cout<<"Result: "<<result;

}