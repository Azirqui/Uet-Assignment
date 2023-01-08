#include <iostream>
using namespace std;
string function(int number);
main()
{
int number;
string result;
cout<<"Enter Number: ";
cin>>number;
result = function(number);
cout<<"Number is :" << result;
}

string function(int number)
{
   int last_dig,div1,div2,div3,sec_last;
   int third_dig,first_dig,second_dig,sum1;
   last_dig=number%10;
   div1=number/10;
   sec_last=div1%10;
   div2=div1/10;
   third_dig=div2%10;
   first_dig=div2/100;
   div3=div2/10;
   second_dig=div3%10;
   sum1=first_dig+second_dig+third_dig+sec_last+last_dig;
   if(sum1%2==0)
    {
     return "Evenish";
    }
   if(sum1%2!=0)
    {
     return "Oddish";
    }
return 0;
}