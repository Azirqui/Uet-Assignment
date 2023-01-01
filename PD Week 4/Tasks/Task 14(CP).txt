#include <iostream>
using namespace std;
int printMenu();
float calculateAggregate(float Matric_per,float Inter_per,float Ecat_per);
void compareMarks(string nameStd1,string nameStd2,int ecatMarksStd1,int ecatMarksStd2);
main()
{
     string name1;
     string name2;
     float matricMarks;
     float interMarks;
     float ecatMarks;
     float aggregate1;
     float aggregate2;
     int menu;
     char key;
     while(true)
   {
    menu = printMenu();
    if(menu==1)
      {
       system("cls");
       cout<<"You chosed: 1"<<endl;
       cout<<"Enter Name: ";
       cin>>name1;
       cout<<"Enter Matric Marks: ";
       cin>>matricMarks;
       cout<<"Enter Inter Marks: ";
       cin>>interMarks;
       cout<<"Enter Ecat Marks: ";
       cin>>ecatMarks;
       aggregate1 = calculateAggregate(matricMarks,interMarks,ecatMarks);
       cout<<"Press key to continue: ";
       cin>>key;
          if(key)
          {
           system("cls");
           
          }
     }
     if(menu==2)
      {
      system("cls");
      cout<<"You chosed: 2"<<endl;
      cout<<"Enter Name: ";
      cin>>name2;
      cout<<"Enter Matric Marks: ";
      cin>>matricMarks;
      cout<<"Enter Inter Marks: ";
      cin>>interMarks;
      cout<<"Enter Ecat Marks: ";
      cin>>ecatMarks;
      
      aggregate2 = calculateAggregate(matricMarks,interMarks,ecatMarks);
      cout<<"Press key to continue: ";
      cin>>key;
          if(key)
          {
           system("cls");
          }
      }
      if(menu==3)
      {
       system("cls");
       cout<<"You chosed: 3"<<endl;
       
       cout<<name1<<"'s aggregate is: "<<aggregate1<<endl;
       cout<<"Press key to continue: ";
       cin>>key;
      if(key)
      {
      system("cls");
      }
      }
      if(menu==4)
      {
       system("cls");
       cout<<"You chosed: 4"<<endl;
      
       cout<< name2<<"'s aggregate is: "<<aggregate2<<endl;
       cout<<"Press key to continue: ";
       cin>>key;
          if(key)
          {
           system("cls");
          }
      }
      if(menu==5)
      {
       cout<<"You chosed: 5"<<endl;
       compareMarks(name1,name2,aggregate1,aggregate2);
       cout<<"Press key to continue: ";
       cin>>key;
          if(key)
          {
           system("cls");
          }
      }   
   }

}
float calculateAggregate(float matricMarks,float interMarks,float ecatMarks)
{
   float matric_per,inter_per,ecat_per;
   matric_per=(matricMarks*30)/1100;
   inter_per=(interMarks*30)/1100;
   ecat_per=(ecatMarks*40)/400;
 return matric_per+inter_per+ecat_per;
}

void compareMarks(string nameStd1,string nameStd2,int aggregateStd1,int aggregateStd2)
{
   if(aggregateStd1 == 0 )
   {
      cout<<"No student 1 entered"<<endl;
   }
   if (aggregateStd2 == 0)
   {
      cout<<"No student 2 entered"<<endl;
   }
   if(aggregateStd1>aggregateStd2)
      {
         cout<<"Roll Number 01 is: "<<nameStd1<<endl;
      }
   if(aggregateStd2>aggregateStd1)
      {
         cout<<"Roll Number 01 is: "<<nameStd2<<endl;    
      }
   
}






int printMenu()
{
   int menu;
   cout <<"*****************************************"<<endl;
   cout <<"*                                       *"<<endl;
   cout <<"*       University Admission            *"<<endl;
   cout <<"*        Management System              *"<<endl;
   cout <<"*                                       *"<<endl;
   cout <<"*                                       *"<<endl;
   cout <<"*****************************************"<<endl;

   cout<<"Welcome to Uet Admission Management System"<<endl;

   cout<<"Press 1 to Enter Details of first Student!"<<endl;
   cout<<"Press 2 to Enter Details of second Student!"<<endl;
   cout<<"Press 3 to calculate the aggregate of first Student!"<<endl;
   cout<<"Press 4 to calculate the aggregate of second Student!"<<endl;
   cout<<"Press 5 to display the student with RollNumber 01!"<<endl;
   cout<<"Enter any value: ";
   cin>>menu;
   return menu;
   }
