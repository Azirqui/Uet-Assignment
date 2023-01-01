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
                   if(Name=="Irzam")
                   {
                    cout<<Name;
                   }
                    if(Name!="Irzam")
                   {
                    cout<<"Enter your name: ";
                    cin>>Name;
                   }
               }
      }