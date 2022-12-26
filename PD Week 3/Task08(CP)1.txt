#include <iostream>
using namespace std;
main()
{
float vegetable;
float fruit;
int num_vege;
int num_fruit;
float vege_cost;
float fruit_cost;
float total_coins;
float total;

cout <<"Vegetable price per kilogram: ";
cin >>vegetable;
cout <<"Fruit price per kilogram: ";
cin >>fruit;
cout <<"Total kilogram of vegetable: ";
cin >>num_vege;
cout <<"Total kilogram pf fruits: ";
cin >>num_fruit;
vege_cost=num_vege*vegetable;
fruit_cost=num_fruit*fruit;
total_coins=vege_cost+fruit_cost;
total=1.94*total_coins;
cout <<"Total: "<<total;
}