#include<iostream>
using namespace std;
bool symetrical(int digit);
main()
{
int  digit;
bool istrue;
cout<<"enter 3 digit number :";
cin>>digit;
istrue=symetrical(digit);
 if(istrue==true)
 {
  cout<<"is symetrical"<<endl;
 }
 if(istrue==false)
 {
    cout<<"is not symetrical"<<endl;
 }



}
 bool symetrical(int digit)
{
 int a,b,d;
 a=digit/100;
 b=digit%100;
 d=b%10;
 if(a==d)
 {
  return true;
 }
 if(a!=d)
 {
   return false;
 }
 return 0;
} 
