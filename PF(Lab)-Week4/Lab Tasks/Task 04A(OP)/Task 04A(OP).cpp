#include <iostream>
using namespace std;
void function(int number,int remainder);
main()
{
  int number;
  int remainder;
  function(number,remainder);  
  
}
void function(int number,int remainder)
{
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