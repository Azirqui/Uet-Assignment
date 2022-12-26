#include <iostream>
using namespace std;
main()
{
int initial_velocity;
int final_velocity;
int time;
int acceleration;

cout <<"Enter Initial Velocity: ";
cin >>initial_velocity;
cout <<"Enter Acceleraion: ";
cin >>acceleration;
cout <<"Enter Time: ";
cin >>time;
final_velocity=initial_velocity+time*acceleration;
cout <<"Final Velocity: "<<final_velocity;

}