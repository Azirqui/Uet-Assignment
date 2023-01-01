#include <iostream>
using namespace std;

void showresult(int marks);

main()
{
  int marks; 
  while(true)
  {  
   showresult(marks);
  }
}

void showresult(int marks)
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