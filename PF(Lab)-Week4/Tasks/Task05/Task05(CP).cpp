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
              price=amount-(5*amount)/100;
              cout <<"Discounted Price: "<<price<<endl;
             }
        if (day =="Tuesday")
             {
              price=amount-(5*amount)/100;
              cout <<"Discounted Price: "<<price<<endl;
             }
        if (day =="Wednesday")
             {
              price=amount-(5*amount)/100;
              cout <<"Discounted Price: "<<price<<endl;
             }
        if (day =="Thursday")
             {
              price=amount-(5*amount)/100;
              cout <<"Discounted Price: "<<price<<endl;
             }
        if (day =="Friday")
             {
              price=amount-(5*amount)/100;
              cout <<"Discounted Price: "<<price<<endl;
             }
        if (day =="Saturday")
             {
              price=amount-(5*amount)/100;
              cout <<"Discounted Price: "<<price<<endl;
             }
    }
