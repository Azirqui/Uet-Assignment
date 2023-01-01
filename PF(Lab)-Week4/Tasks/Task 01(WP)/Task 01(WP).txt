#include <iostream>
using namespace std;
void add      (int number1,int number2);
void product  (int number1,int number2);
void subtract  (int number1,int number2);
void devision (int number1,int number2);

main()
{
     int  num1;
     int  num2;
     char operation;
     
     while (true)
     {
     cout <<"Enter num1: ";
     cin  >>num1;
     cout <<"Enter num2: ";
     cin  >>num2;
     cout << "Enter operation(+,-,*,/): ";
     cin  >> operation;
         if (operation =='+')
         {
          add(num1,num2);   
         }
         if (operation =='-')
         {
          subtract(num1,num2);
         }
         if (operation =='*')
         {
         product(num1,num2);
         }
         if (operation =='/')
         {
          devision(num1,num2);
         }
     }
}

void add(int number1,int number2)
  {
  int sum;
  sum=number1+number2;
  cout<<"Sum is: "<<sum<<endl;
  }

void product(int number1,int number2)
   {
   int multiply;
   multiply=number1*number2;
   cout<<"Answer is: "<<multiply<<endl;
   }

void subtract(int number1,int number2)
  {
  int subtract;
  subtract=number1-number2;
  cout<<"Answer is: "<<subtract<<endl;
  }

void devision(int number1,int number2)
    {
    float devision;
    devision=number1/number2 ;
    cout<<"Answer is: "<<devision<<endl;
    }