#include<iostream>
using namespace std;

void iseligible( int age);

main()
{
  int age;
  while(true)
  { cout<<"enter age : ";
  cin>>age;
  iseligible(age);
  }
}
void iseligible( int age)
{
 if(age>=18)
 {
   cout<<" he/she eligible to vote"<<endl;
 }
 if(age<18)
 {
  cout<<" he/she is note eligibal"<<endl;

 }
}
