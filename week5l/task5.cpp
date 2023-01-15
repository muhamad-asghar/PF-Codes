#include<iostream>
using namespace std;
string evenishoddish(int digit);
main()
{
 int digit;
 string total;
 cout<<"enter 5 digit number :";
 cin>>digit;
 total=evenishoddish(digit);
 if(total=="even")
{
 cout<<"evenish"<<endl;
}
  if(total=="odd")
 {
 cout<<"oddish number"<<endl;
  }




}
 string evenishoddish(int digit)
{
  int a,b,c,d,e,f,g,h,sum;
 string even,odd;
  a=digit/10000;
  b=digit%10000;
  c=b/1000;
  d=b%1000;
  e=d/100;
  f=d%100;
  g=f/10;
  h=f%10;
  sum=a+c+e+g+h;
  if(sum%2==0)
  {
   return "even";
   }
   if(sum%2!=0)
  {
   return "odd";
  }
 return 0;
  
} 