#include <iostream>
using namespace std;
int function (int number1,int number2);
float divide (int number1,int number2);
int isGreater(int number1,int number2);

main()
{
   int num1,num2,total;
   float answer;
   int greater1;
   cout<<"Enter first number:";
   cin>>num1;
   cout<<"Enter second number:";
   cin>>num2;
   total=function(num1,num2);
   cout<<"Total: "<<total<<endl;
   answer=divide (num1,num2);
   cout<<"Answer is: "<<answer<<endl;
   greater1=isGreater(num1,num2);
   cout<<"Answer: "<<greater1<<endl;

}

int function(int number1,int number2)
{
  int sum;
  sum=number1 + number2;
  return sum;
}
float divide (int number1,int number2)
{
  float divide;
  divide=number1/number2;
  return divide;
}
int isGreater(int number1,int number2)
{
    if(number1>number2)
    {
     return number1;
    }
    if(number2>number1)
    {
     return number2;
    }
    return 0;

}
