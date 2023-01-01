#include<iostream>
using namespace std;
void large(int number1,int number2);
main()
{
 int number1,number2;
 while(true)
 {
 cout<<"enter first number";
 cin>>number1;
 cout<<"enter 2nd number";
 cin>>number2;
 large(number1,number2);
 }
}
 void large(int number1,int number2)
{ 
  if(number1<number2)
  {
  cout<<"larger number is "<<number2<<endl;
  }
  if(number1>number2)
  {
  cout<<"larger number is "<<number1<<endl; 
  }
 }
