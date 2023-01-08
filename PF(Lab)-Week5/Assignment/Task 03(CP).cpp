#include <iostream>
using namespace std;
bool function(int number);
main ()
{ 
  int number;
  bool result;
  cout<<"Enter Three Digit Number: ";
  cin>>number;
  result= function(number);
  if(result==true)
  {
   cout<<"Number is symmetrical.";
  }
  if(result==false)
  {
   cout<<"Number is not symmetrical.";
  }
  
  
  
}
bool function(int number)
{
  int last_dig,a,second_dig,third_dig;
  last_dig=number%10;
  a=number/10;
  second_dig=a%10;
  third_dig=number/100;
  if(last_dig==third_dig)
   {
    return true;
   } 
    if(last_dig!=third_dig)
   {
    return false;
   } 
   return 0;
}
