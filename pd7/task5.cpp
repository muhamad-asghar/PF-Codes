#include<iostream>
using  namespace std;
int count(int digit);
main()
{
 int digit,result;
 cout<<"enter digit :";
 cin>>digit;
 result=count(digit);
cout<<result;

}
 int count(int digit)
 {
    int p=0;
  for(int k=1;k<=digit;k++)
  {
    for(int j=1; j<=k;j++)
    {
        p++;
    }
    
    
  }
   return p;


 }
 