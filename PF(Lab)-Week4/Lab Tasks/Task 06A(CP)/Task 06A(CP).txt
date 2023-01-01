#include <iostream>
using namespace std;
void calculateBill(string day,int amount);

main()
{
     string Day;
     int Amount;
     while(true)
     {
     cout <<"Enter Day: ";
     cin>>Day;
     
     cout <<"Enter Purchase Amount: ";
     cin>>Amount;
     calculateBill(Day,Amount);
     }
}
     void calculateBill(string day,int amount)
    {
        int price;
       
        if (day =="Sunday")
             {
              price=amount-(10*amount)/100;
              cout <<"Discounted Price: "<<price<<endl;
             }
        if (day =="Monday")
             {
              cout <<"Price: "<<amount<<endl;
             }
        if (day =="Tuesday")
             {
              cout <<"Price: "<<amount<<endl;
             }
        if (day =="Wednesday")
             {
              cout <<"Price: "<<amount<<endl;
             }
        if (day =="Thursday")
             {
              cout <<"Price: "<<amount<<endl;
             }
        if (day =="Friday")
             {
              cout <<"Price: "<<amount<<endl;
             }
        if (day =="Saturday")
             {
              cout<<"Price: "<<amount<<endl;
             }
    }
