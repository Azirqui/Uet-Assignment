#include <iostream>
using namespace std;
main()
{
   int marks;
   while(true)
   {
     cout <<"Enter marks: ";
     cin >>marks;  
     if (marks >50)
     {
      cout <<"PASS"<<endl;
     }
     if (marks <50)
     {
      cout <<"FAIL"<<endl;
     }
   }
}