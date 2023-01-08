#include <iostream>
using namespace std;
int last_digit(int number);
int first_digit(int number);
main()
{ 
  int number;
  int first_dig,last_dig;
  cout << "Enter any number except (11-19): ";
  cin>>number;
  first_dig = first_digit(number);
   last_dig = last_digit(number);
  
}
int first_digit(int number)
{
       int first_dig;
       first_dig = number/10;
       if(first_dig==1)
       {
         cout<<"ten";
       return first_dig;
       }
       if(first_dig==2)
       {
        cout<<"twenty";
       return first_dig;
       }
       if(first_dig==3)
       {
        cout<<"thirty";
        return first_dig;
       }
       if(first_dig==4)
       {
        cout<<"forty";
        return first_dig;
       }
       if(first_dig==5)
       {
        cout<<"fifty";
        return first_dig;
       }
       if(first_dig==6)
       {
        cout<<"sixty";
        return first_dig;
       }
       if(first_dig==7)
       {
       cout<<"seventy";
       return first_dig;
       }
       if(first_dig==8)
       {
        cout<<"eighty";
        return first_dig;
       }
       if(first_dig==9)
       {
        cout<<"ninty";
        return first_dig;
       }
       if(number==100)
       {
       cout<<"hundred";
       return first_dig;
       }
}
int last_digit(int number)
{
       int last_dig;
       last_dig = number%10;
       if(last_dig==1)
       {
         cout<<" one";
         return last_dig;
       }
       if(last_dig==2)
       {
        cout<<" two";
        return last_dig;
       }
       if(last_dig==3)
       {
        cout<<" three";
        return last_dig;
       }
       if(last_dig==4)
       {
        cout<<" four";
        return last_dig;
       }
       if(last_dig==5)
       {
        cout<<" five";
        return last_dig;
       }
       if(last_dig==6)
       {
        cout<<" six";
        return last_dig;
       }
       if(last_dig==7)
       {
       cout<<" seven";
       return last_dig;
       }
       if(last_dig==8)
       {
        cout<<" eight";
        return last_dig;
       }
       if(last_dig==9)
       {
        cout<<" nine";
        return last_dig;
       }
      
}