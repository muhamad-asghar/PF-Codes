#include<iostream>
using namespace std;
main()
{
int a,b,c,d,n,s;
cout<<"enter 4 digit number :";
cin>>n;
a=n%10;
b=(n/10)%10;
c=(n/100)%10;
d=(n/1000)%10;
s=a+b+c+d;
cout<<"sumis :"<<s;



}