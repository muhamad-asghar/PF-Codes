#include<iostream>
using namespace std;
void printmenu();
void calculateaggregate(string name,float matric,float fsc, float ecat);
void comparemarks(string std1,string std2,float ecatstd1,float ecatstd2);
main()
{
 int choice;
 string std1,std2;
 float ecatstd1,ecatstd2;
 string name;
 float matric ;
 float fsc,ecat;

 printmenu();
 calculateaggregate(name, matric, fsc,  ecat);
 comparemarks(std1, std2, ecatstd1, ecatstd2);
}
 
 void calculateaggregate(string name,float matric, float fsc, float ecat)
{ 
  int choice;
  float agregate1,agregate2;
 cout<<"your choice :";
 cin>>choice;
 if(choice==1)
  {
  cout<<"enter name :";
  cin>>name;
  cout<<"enter matric 1100 :";
  cin>>matric;
  cout<<"enter fsc550 :";
  cin>>fsc;
  cout<<"enter ecat 400 :";
  cin>>ecat;
   agregate1=((matric/1100)*(30))+((fsc/550)*(30))+((ecat/400)*(40));
  cout<<"enter choice";
  cin>>choice;
  }
    if(choice==2)
  {
  cout<<"enter name :";
  cin>>name;
  cout<<"enter matric :";
  cin>>matric;
  cout<<"enter fsc :";
  cin>>fsc;
  cout<<"enter ecat :";
  cin>>ecat;
  agregate2=((matric/1100)*(30))+((fsc/550)*(30))+((ecat/400)*(40));
  cout<<"enter choice";
  cin>>choice;
  }
   
   if(choice==3)
    { 
    cout<<"agregate of std1 is :"<<agregate1<<endl;
    }
      cout<<"enter choice";
      cin>>choice;
 if(choice==4)
    { 
   cout<<"agg of student 2 is  :"<<agregate2<<endl;
    }
   
 
} 
 void comparemarks(string std1,string std2,float ecatstd1,float ecatstd2)
{
  int choice; 
  cout<<"enter choice ";
  cin>>choice; 
  if (choice==5)
 {
  cout<<"enter std 1 mark";
  cin>>std1;
  cout<<"enter std2 mark";
  cin>>std2;
  if(ecatstd1<ecatstd2)
    {
     cout<<"first roll number is"<<std2;
    }
  if(ecatstd1>ecatstd2)
    {
     cout<<"first roll number is "<<std2;
    }
  }
}
  void printmenu()
{
 cout<<"########################################################"<<endl;
 cout<<"#                                                      #"<<endl;
 cout<<"#             UET LAHORE                               #"<<endl;
 cout<<"#                                                      #"<<endl;
 cout<<"#                                                      #"<<endl;
 cout<<"########################################################"<<endl;


 
 cout<<"                university manegment system"<<endl;


  cout<<"to enter detail of std1 press 1"<<endl;  
  cout<<"to enter detail of std2 press 2"<<endl;
  cout<<"to find agregate of std1 press 3"<<endl;
  cout<<"to find agregate of std2 press 4"<<endl;
  cout<<"press 5 for first roll number"<<endl;
 
}

