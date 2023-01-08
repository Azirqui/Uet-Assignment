#include <iostream>
#include <cmath>
using namespace std;
main()
{
   int number1;
   int number2;
   cout <<" Enter number1: ";
   cin>>number1;
   cout <<" Enter number2: "; 
   cin>>number2;
   int Minimum_Number;
   Minimum_Number=min(number1,number2);
   cout<<"Minimum Number :"<<Minimum_Number;
}