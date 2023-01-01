#include<iostream>
using namespace std;
void iseven(int number);
main()
{
 int number;
 while(true)
 { 
  cout<<"enter number :";
  cin>>number;
  iseven(number);
 }
}
 void iseven(int number)
{
 if(number%2==0)
 {
 cout<<"number is even"<<endl;
 }
 if(number%2!=0)
 {
 cout<<"number is not even"<<endl;
 }
}