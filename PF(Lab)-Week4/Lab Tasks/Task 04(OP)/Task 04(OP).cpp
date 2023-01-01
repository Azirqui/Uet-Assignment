#include <iostream>
using namespace std;
main()
{
  int number;
  int remainder;  
  while(true)
 {
   cout<<"Enter the number: ";
   cin>>number;
   remainder=number%2;
   if(remainder==1)
    {
     cout<<"Odd"<<endl;
    }
   if(remainder==0)
    {
     cout<<"Even"<<endl;
    }
 }
}