#include<iostream>
using namespace std;
main()
{
 int days,workingdays,gametime;
 float result,difference ;
 cout<<"enter days :";
 cin>>days;
 workingdays=365-days;
 gametime=((workingdays*63)+(days*127));
 difference=30000-gametime;
 result=difference/60.0;
 if(difference>0)
  {
   cout<<"tom sleep well :"<<endl;
   cout<<"difference  from norm in hours is :"<<result<<endl;
  }
 if(difference<0)
  {
   cout<<"tom ran away"<<endl;
   cout<<"difference from norm in hours is  :"<<result<<endl;
  }
}