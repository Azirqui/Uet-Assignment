#include <iostream>
using namespace std;
void function(int Speed);
main()
{
  int speed;
  cout << "Enter speed in Km/h: ";
  cin>>speed;
  function(speed);
}
void function(int Speed)
{
   if(Speed > 100)
   {
   cout << "Halt! You will be challenged.";
   }
   if(Speed <=100)
   {
   cout << "Perfect! You are going good.";
   } 
}