#include<iostream>
#include<cmath>
using namespace std;


main()
{
 float number1,number2,total;
 cout<<"number1 :";
 cin>>number1;
 cout<<"number2 :";
 cin>>number2;
 
 total=max(number1,number2);
 cout<<"is greater :"<<total<<endl;
 total=min(number1,number2);
 cout<<total<<"is min"<<endl;
 total=sqrt(number1);
 cout<<total<<"is sqrt"<<endl;
 total= pow(12,2);
 cout<<total<<"power is"<<endl;
  total=cbrt(27);
 cout<<total<<"cbrt"<<endl;
 total=ceil(3.9);
 cout<<total<<"ceiling"<<endl;

 total=floor(3.9);
 cout<<total<<"floor"<<endl;




}