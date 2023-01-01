#include <iostream>
using namespace std;
void function(int number1,int number2);
main()
{
   int num1;
   int num2;
   function(num1,num2);
}

   void function(int number1,int number2)
  {
     cout<<"Enter num1: ";
     cin>>number1;
     cout<<"Enter num2: ";
     cin>>number2;
     if(number1>number2)
     {
      cout<<"Answer is: "<<number1;
     } 
     if(number2>number1)
     {
      cout<<"Answer is: "<<number2;
     } 
  }