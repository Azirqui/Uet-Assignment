#include <iostream>
using namespace std;
int function( int Holidays);
main()
{
   while(true)
   {
   int holidays;
   cout<<"Enter number of holidays: ";
   cin>>holidays;
   function(holidays);
   } 
}

int function(int Holidays)
{
  int workingdays;
  float time;
  int difference;
  int minutes;
  int hours;
  int time2;
  workingdays=365-Holidays;
  time=(workingdays*63)+(Holidays*127);
  difference=30000-time;
  minutes=difference%60;
  time2=difference-minutes;
  hours=time2/60;
  if (time<30000)
   {
    cout<<"Tom Sleeps Well."<<endl;
    cout<<hours<<" hours and "<<minutes <<" minutes less for play."<<endl;
   }
  if (time>30000)
   {
   cout<<"Tom will run away."<<endl;
   cout<<-hours <<" hours and "<< -minutes <<" minutes for play."<<endl;
   }
}