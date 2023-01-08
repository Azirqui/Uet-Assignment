#include <iostream>
#include <cmath>
using namespace std;

main()
{
  float a_2;
  a_2=2*5;
  float ac_4;
  ac_4=4*5*1;
  float b_square;
  b_square=pow(6,2);
  float b_sq_4ac;
  b_sq_4ac=(b_square)-(ac_4);
  float under_root;
  under_root =sqrt(b_sq_4ac);
  float x_positive;
  x_positive=(-6+under_root)/a_2;
  cout<<"X: "<<x_positive<<endl;
  float x_negative;
  x_negative=(-6-under_root)/a_2;
  cout<<"X: "<<x_negative<<endl;
}
