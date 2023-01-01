#include<iostream>
using namespace std;
void showresult(int marks);
main()
{
 int marks;
 while( true)
 {
 cout<<"enter marks :";
 cin>>marks;
 showresult(marks);
 }
}
 void showresult(int marks)
{

  if(marks>50)
 {
  cout<<"pass"<<endl;

 }
  if(marks<50)
 {
  cout<<"fail"<<endl;
 }
  if(marks==50)
 {
  cout<<"mehnat kro"<<endl;
 }
}
