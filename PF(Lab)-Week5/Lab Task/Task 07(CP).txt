#include <iostream>
#include <cmath>
using namespace std;
main()
{
  float angle;
  float radian_angle;
  float Answer;
  cout<<"Enter Angle in degrees :";
  cin>>angle;
  radian_angle=(angle/57.2958);
  Answer = sin(radian_angle);
  cout <<"Sine of Angle is :"<<Answer;
}