#include <iostream>
#include <cmath>
using namespace std;
main()
{
   int number1;
   int number2;
   int Power;
   cout<<"Enter number1 :";
   cin>>number1;
   cout<<"Enter number2 :";
   cin>>number2;
   pow(number1,number2);
   Power=pow(number1,number2);
   cout<<"Required Result: "<<Power;
}