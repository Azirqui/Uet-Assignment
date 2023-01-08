#include <iostream>
using namespace std;
main()
{
  int in_hours,in_minutes,total_in_minutes,time_add,remainder,time_minutes,time_hours,time;
  cout<<"Enter hours :";
  cin>>in_hours;
  cout<<"Enter minutes :";
  cin>>in_minutes;
  total_in_minutes =(in_hours*60)+(in_minutes);
  time_add= total_in_minutes+15;
  remainder = time_add%60;
  time_minutes=time_add-remainder;
  time_hours=time_minutes/60;  
  if(time_hours<24)
  {
   cout<<"Required Time: " << time_hours <<" hours " << remainder << " minutes ";
  }

  if(time_hours>=24)
   {
    time=time_hours-24;
    cout<<"Required Time: "<< time << " hours " <<  remainder << " minutes ";
   }
}