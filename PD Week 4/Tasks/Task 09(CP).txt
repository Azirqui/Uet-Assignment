#include <iostream>
using namespace std;
void function(string Input);
main()
{
   string input;
   while(true)
   {
    cout<<"Input: ";
    cin>>input;
    function(input);
   }
}
void function(string Input)
{
   if(Input=="true")
   {
    cout<<"False"<<endl;
   }
    if(Input=="false")
   {
    cout<<"True"<<endl;
   }
}