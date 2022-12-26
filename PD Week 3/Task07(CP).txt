#include <iostream>
using namespace std;
main()
{
string movie_name;
int adult_price;
int child_price;
int adult_sold;
int child_sold;
int percentage;
int total_amount;
int charity;
int remaining;

cout <<"Enter Movie Name: ";
cin >>movie_name;
cout <<"Enter Adult Ticket Price: ";
cin >>adult_price;
cout <<"Enter Adult Ticket Price: ";
cin >>child_price;
cout <<"Enter Number of Adult Ticket Sold: ";
cin >>adult_sold;
cout <<"Enter Number of Child Ticket Sold: "; 
cin >>child_sold;
cout <<"Enter Percentage to Donate: ";
cin >>percentage;
total_amount=(adult_price*adult_sold)+(child_price*child_sold);
cout<<"Total Amount Generated: "<<total_amount<<endl;
charity=(total_amount*percentage)/100;
remaining=total_amount-charity;
cout<<"Amount after donation: "<<remaining;

}