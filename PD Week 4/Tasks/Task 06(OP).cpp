#include <iostream>
#include <windows.h>
using namespace std;

void gotoxy(int x ,int y);
void functionA();
void functionW();
void functiona();
void functionI();
void functionS();
main()
{
     system("cls");
     functionA();
     functionW();
     functiona();
     functionI();
     functionS();
}

void gotoxy(int x,int y)
{
 COORD coordinates;
 coordinates.X=x;
 coordinates.Y=y;
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}

void functionA()
{
gotoxy(50,1);
cout << "            "<<endl;
gotoxy(50,2);
cout << "     ##     "<<endl;
gotoxy(50,3);
cout << "   ##  ##   "<<endl;
gotoxy(50,4);
cout << "  ##    ##  "<<endl;
gotoxy(50,5);
cout << "  ########  "<<endl;
gotoxy(50,6);
cout << "  ##    ##  "<<endl;
gotoxy(50,7);
cout << "  ##    ##  "<<endl;
}
void functionW()
{
gotoxy(50,8);
cout << "              "<<endl;
gotoxy(50,9);
cout << "  ##      ##  "<<endl;
gotoxy(50,10);
cout << "  ##      ##  "<<endl;
gotoxy(50,11);
cout << "  ##  ##  ##  "<<endl;
gotoxy(50,12);
cout << "  ## #  # ##  "<<endl;
gotoxy(50,13);
cout << "  ###    ###  "<<endl;
}
void functiona()
{
gotoxy(50,14);
cout << "            "<<endl;
gotoxy(50,15);
cout << "     ##     "<<endl;
gotoxy(50,16);
cout << "   ##  ##   "<<endl;
gotoxy(50,17);
cout << "  ##    ##  "<<endl;
gotoxy(50,18);
cout << "  ########  "<<endl;
gotoxy(50,19);
cout << "  ##    ##  "<<endl;
gotoxy(50,20);
cout << "  ##    ##  "<<endl;
}
void functionI()
{
gotoxy(50,21);
cout << "            "<<endl;
gotoxy(50,22);
cout << "  ########  "<<endl;
gotoxy(50,23);
cout << "     ##     "<<endl;
gotoxy(50,24);
cout << "     ##     "<<endl;
gotoxy(50,25);
cout << "     ##     "<<endl;
gotoxy(50,26);
cout << "  ########  "<<endl;
}
void functionS()
{
gotoxy(50,27);
cout << "                "<<endl;
gotoxy(50,28);
cout << "   ######       "<<endl;
gotoxy(50,29);
cout << "####    ####    "<<endl;
gotoxy(50,30);
cout << " ###     ###    "<<endl;
gotoxy(50,31);
cout << "    ###         "<<endl;
gotoxy(50,32);
cout << "      ###       "<<endl;
gotoxy(50,33);
cout << "       ###      "<<endl;
gotoxy(50,34);
cout << "        ###     "<<endl;
gotoxy(50,35);
cout << "###     ###     "<<endl;
gotoxy(50,36);
cout << "###    ###      "<<endl;
gotoxy(50,37);
cout << "  #######       "<<endl;
}
