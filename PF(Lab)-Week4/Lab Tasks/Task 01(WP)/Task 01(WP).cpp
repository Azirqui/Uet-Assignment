#include <iostream>
using namespace std;
void add(int number1,int number2);
main()
{
   int  num1;
   int  num2;
   char operation;
   cout << "Enter num1: ";
   cin  >>  num1;
   cout << "Enter num2: ";
   cin  >>  num2;
   cout << "Enter operation(+,-,*,/): ";
   cin  >> operation;
   if (operation =='+')
     {
       add(num1,num2);   
     }
}
void add(int number1,int number2)
 {
  int sum;
  sum=number1+number2;
  cout<<"Sum is: "<<sum<<endl;
 }