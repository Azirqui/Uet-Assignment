#include <iostream>
using namespace std;
main()
{
     string Day;
     int amount;
     float price;
     while(true)
   {
     cout <<"Enter Day: ";
     cin>>Day;
     cout <<"Enter Purchase Amount: ";
     cin>>amount;
        if (Day =="Sunday")
             {
              price=amount-(0.10*amount);
              cout <<"Discounted Price: "<<price<<endl;
             }
        if (Day =="Monday")
             {              
              cout <<"Price: "<<amount<<endl;
             }
        if (Day =="Tuesday")
             {             
              cout <<"Price: "<<amount<<endl;
             }
        if (Day =="Wednesday")
             {             
              cout <<"Price: "<<amount<<endl;
             }
        if (Day =="Thursday")
             {             
              cout <<"Price: "<<amount<<endl;
             }
        if (Day =="Friday")
             {            
              cout <<"Price: "<<amount<<endl;
             }
        if (Day =="Saturday")
             {
              cout <<"Price: "<<amount<<endl;
             }
   }
}