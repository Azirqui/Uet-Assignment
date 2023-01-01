#include <iostream>
using namespace std;
void function(string Country,float Discount);
main()
{
    string country;
    float dollarPrice;
    while(true)
    {
    cout << "Enter country name: ";
    cin >> country;
    cout << "Enter Dollar Price: ";
    cin >> dollarPrice;
    function(country,dollarPrice);
    }
}
void function(string Country, float Discount)
{
   if(Country=="Pakistan")
   {
    Discount=Discount-(5*Discount)/100;
    cout<<"Discounted Price: "<<Discount<<endl;
   }
   if(Country=="Ireland")
   {
    Discount=Discount-(10*Discount)/100;
    cout<<"Discounted Price: "<<Discount<<endl;
   }
   if(Country=="India")
   {
    Discount=Discount-(20*Discount)/100;
    cout<<"Discounted Price: "<<Discount<<endl;
   }
    if(Country=="England")
   {
    Discount=Discount-(30*Discount)/100;
    cout<<"Discounted Price: "<<Discount<<endl;   
   }
   if(Country=="Canada")
   {
   Discount=Discount-(45*Discount)/100;
   cout<<"Discounted Price: "<<Discount<<endl;   
   }
}
