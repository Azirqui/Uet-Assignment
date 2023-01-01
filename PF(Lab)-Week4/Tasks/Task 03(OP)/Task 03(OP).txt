#include <iostream>
using namespace std;
void function(string Name);
main()
{
      string Name;
      function(Name);
}

void function(string Name)
  {
   cout<<"Enter your name: ";
   cin>>Name;
   while(true)
       {        
        cout<<Name;
       }
  }