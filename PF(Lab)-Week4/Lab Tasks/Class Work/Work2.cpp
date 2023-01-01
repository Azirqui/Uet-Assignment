#include <iostream>
using namespace std;
void add();
void product();
main()
{
 add();
 product();
}
void add(){
int num1;
int num2;
int sum;

cin>>num1;
cin>>num2;
sum=num1+num2;
cout<<"Sum is: "<<sum<<endl;
}

void product()
{
int num3;
int num4;
int multiply;

cin>>num3;
cin>>num4;
multiply=num3*num4;
cout<<"Answer is: "<<multiply;
}