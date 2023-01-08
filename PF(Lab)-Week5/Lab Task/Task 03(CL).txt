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
   int Greater_Number;
   Greater_Number=max(number1,number2);
   cout<<"Greater Number :"<<Greater_Number;
}