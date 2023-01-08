#include <iostream>
#include <cmath>
float calculateHeight(float base,float degrees);
using namespace std;
main()
{
  float height;
  float base;
  float angle;
  cout<<"Enter Angle :";
  cin>>angle;
  cout<<"Enter Base :";
  cin>>base;
  height=calculateHeight(base,angle);
  cout<<"Required Height :"<<height;
  
}
float calculateHeight(float base,float degrees)
{
   float radian_angle,tangent,height;
   radian_angle=(degrees/57.2958);
   tangent = tan(radian_angle);
   height=base*tangent;
   return height;

}