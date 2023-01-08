#include <iostream>
using namespace std;
main()
{
   int volume,P1,P2;
   float hours;
   int p1,p2,volume_time;
   float volume_per,pipe1_per,pipe2_per;
   float volume_over;
   cout<<"Enter volume of pool in liters :";
   cin>>volume;
   cout<<"the flow rate of first pipe per hour :";
   cin>>P1;
   cout<<"the flow rate of second pipe per hour :";
   cin>>P2;
   cout<<"the hours for which worker is absent :";
   cin>>hours;
   p1=hours*P1;
   p2=hours*P2;
   volume_time = p1+p2;
   if(volume_time<volume)
   {
    volume_per=(volume_time*100)/volume;
    pipe1_per=(p1*100)/volume_time;
    pipe2_per=(p2*100)/volume_time;
    cout<<"Pool filled: "<<volume_per <<"%"<<endl;
    cout<<"Pipe1 contribution: "<<pipe1_per <<"%"<<endl;
    cout<<"Pipe2 contribution: "<<pipe2_per <<"%"<<endl;
   }
   if(volume_time>volume)
   {
   volume_over=volume_time-volume;
   cout<<"For " << hours << " hours the pool overflows with " << volume_over << " liters.";
   }
}