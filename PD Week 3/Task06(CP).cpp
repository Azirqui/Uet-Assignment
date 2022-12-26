#include <iostream>
using namespace std;
main()
{
int bag_size;
int cost;
int area;
int fertilizer;
int area_per_square;

cout <<"Enter Bag Size in pounds: ";
cin >>bag_size;
cout <<"Enter cost of the bag: ";
cin >>cost;
cout <<"Enter area covered by each bag in square feet: ";
cin >>area;
fertilizer=cost/bag_size;
cout <<"Cost of fertilizer per pound: "<<fertilizer<<endl;
area_per_square=area*bag_size;
cout <<"Cost of fertilizing the area per square feet: "<<area_per_square;

}