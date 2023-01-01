#include <iostream>
using namespace std;
void function(int Redroses,int Whiteroses,int Tulip);
main()
{
   int redroses;
   int whiteroses;
   int tulip;
   while(true)
   {
    cout << "Enter number of Red Roses: ";
    cin>>redroses;
    cout << "Enter number of White Roses: ";
    cin>>whiteroses;
    cout << "Enter number of Tulip: ";
    cin>>tulip;
    function(redroses,whiteroses,tulip);
    }
}
void function(int Redroses,int Whiteroses,int Tulip)
{
   float price;
   float discount;
   price=(2*Redroses)+(4.10*Whiteroses)+(2.50*Tulip);
   if(price>200)
   {
    discount=price-(price*0.20);
    cout<<"Price: "<<price<<endl; 
    cout <<"Dicounted Price: "<<discount<<endl;
   }
   if(price<=200)
   {
    cout<<"Price: "<<price<<endl; 
   }
}