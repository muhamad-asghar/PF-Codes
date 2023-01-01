#include<iostream>
using namespace std;

void add( int number1,int number2);
void product(int number1,int number2 );
void substraction(int number1,int number2);
void devision(int number1,int number2);
main()
{
 int number1,number2;
 char operation;
while(true)
{ cout<<"enter first number :";
 cin>>number1;
 cout<<"enter second number :";
 cin>>number2;
 cout<<"enter operation :";
 cin>>operation;
 if(operation=='+')
 {
  add(number1,number2);
 }
 if(operation=='-')
 {
 substraction(number1,number2);
 }
 if(operation=='/')
 {
 devision(number2,number1);
 }
 if(operation=='*')
 {
 product(number1,number2);
 }
}}
  void add(int number1,int number2)
 {
  int sum;
  sum=number1+number2;
  cout<<"sum :"<<sum<<endl;
 }
 void product(int number1,int number2 )
 {
  int product;
  product=number1*number2;
  cout<<"product is :"<<product<<endl;
 }
 void substraction(int number1,int number2)
 {
 int substraction;
 substraction=number1-number2;
 cout<<"result is :"<<substraction<<endl;
 }
 void devision(int number1,int number2)
 {
  int devision  ;
  devision=number1/number2;
  cout<<"division is :"<< devision<<endl;
 }