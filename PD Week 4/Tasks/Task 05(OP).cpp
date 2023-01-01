#include <iostream>
#include <windows.h>
using namespace std;

void gotoxy(int x ,int y);
void functionN();
void functionO();
void functionM();
void functionA();
void functionn();
main()
{
     system("cls");
     
     functionN();
     functionO();
     functionM();
     functionA();
     functionn();
}

void gotoxy(int x,int y)
{
 COORD coordinates;
 coordinates.X=x;
 coordinates.Y=y;
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}

void functionN()
{
gotoxy(20,13);
cout << "###      ##     "<<endl;
gotoxy(20,14);
cout << "## ##    ##     "<<endl;
gotoxy(20,15);
cout << "##  ##   ##     "<<endl;
gotoxy(20,16);
cout << "##    ## ##     "<<endl;
gotoxy(20,17);
cout << "##      ###     "<<endl;
}
void functionO()
{
gotoxy(38,13);
cout << "   #######          "<<endl;
gotoxy(38,14);
cout << " ##       ##        "<<endl;
gotoxy(38,15);
cout << "##         ##       "<<endl;
gotoxy(38,16);
cout <<"##         ##       "<<endl;
gotoxy(38,17);
cout << " ##       ##        "<<endl;
gotoxy(38,18);
cout << "   #######          "<<endl;
}
void functionM()
{
gotoxy(55,13);
cout << "###      ###     "<<endl;
gotoxy(55,14);
cout << "## ##  ## ##     "<<endl;
gotoxy(55,15);
cout << "##   ##   ##     "<<endl;
gotoxy(55,16);
cout << "##        ##     "<<endl;
gotoxy(55,17);
cout << "##        ##     "<<endl;
}


void functionA()
{
gotoxy(70,13);
cout << "     ##     "<<endl;
gotoxy(70,14);
cout << "   ##  ##   "<<endl;
gotoxy(70,15);
cout << "  ##    ##  "<<endl;
gotoxy(70,16);
cout << "  ########  "<<endl;
gotoxy(70,17);
cout << "  ##    ##  "<<endl;
gotoxy(70,18);
cout << "  ##    ##  "<<endl;
}
void functionn()
{
gotoxy(85,13);
cout << "###      ##     "<<endl;
gotoxy(85,14);
cout << "## ##    ##     "<<endl;
gotoxy(85,15);
cout << "##  ##   ##     "<<endl;
gotoxy(85,16);
cout << "##    ## ##     "<<endl;
gotoxy(85,17);
cout << "##      ###     "<<endl;
}