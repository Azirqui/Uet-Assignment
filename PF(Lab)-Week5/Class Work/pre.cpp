#include <iostream>
#include <cmath>
using namespace std;
main()
{
  float number1,number2;
  float total;
  cout<<"Enter number1: ";
  cin>>number1;
  cout<<"Enter number2: ";
  cin>>number2;
 
  total = max(number1,number2);
  cout<< total << "is greater number!!!"<<endl;
  total =  min(number1,number2);
  cout<< total << "is minimum number!!!"<<endl;
  total = sqrt(number1);
  cout<< total << "is required square root!!!"<<endl;
  total = pow(number1,number2);
  cout<< total << "is required result!!!"<<endl;
  total = cbrt(number1);
  cout<< total << "is required cube root!!!"<<endl;
}