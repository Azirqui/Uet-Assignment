#include <iostream>
using namespace std;
void function(int number1,int number2);
main()
{
    int num1;
    cout<<"Enter first number: ";
    cin>>num1;
    int num2;
    cout<<"Enter second number: ";
    cin>>num2;
    function(num1,num2);
}

void function(int number1,int number2)
{
   if(number1==number2)
   {
   cout<<"TURE";
   }
   if(number1!=number2)
   {
   cout<<"FALSE";
   }
}