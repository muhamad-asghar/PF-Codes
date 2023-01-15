#include<iostream>
using namespace std;

int isgreater(int number1,int number2);
main()
{
 int number1,number2;
 int total;
 cout<<"number1 :";
 cin>>number1;
 cout<<"number2 :";
 cin>>number2;
 total=isgreater(number1,number2);
 cout<<"greater number is"<<total<<endl;
 cout<<"program ends";
}
 int add(int number1,int number2)
 {
 int sum=number1+number2;
 return sum;
 }
  float devide(float number1,float number2)
  {
  float devide=number1/number2;
  return devide;
  }
  int greater(int number1,int number2)
{
   if(number1>number2)
   {
    return number1;
   }
   if(number2>number1)
   {
   return number2;
   }
    return 0;
 }