#include <iostream>
using namespace std;
main()
{
double Bites;
double Bytes;
double KB;
double MB;
cout<<"Enter Value: ";
cin >>Bites;
Bytes=Bites/8;
cout<<"Value in Bytes is: "<<Bytes;
KB=Bytes/1024;
cout <<"Value in KB is: "<<KB;
MB=KB/1024;
cout <<"Value in MB is: "<<MB;


}