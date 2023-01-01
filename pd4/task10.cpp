#include<iostream>
using namespace std;
void discount(string name,float price);
main()
{
 string name;
 float price;
  while(true)
   {
 discount(name, price);
   }
}
 void discount(string name,float price)
 {
 float afd;
 cout<<"enter country name : ";
 cin>>name;
 cout<<"enter price in dollars :";
 cin>>price;
  if(name=="pakistan")
  {
   afd=price*.95;
   cout<<"final price is :"<<afd<<endl;
   }
  if(name=="irland" )
   {
   afd=price*.90;
   cout<<"final price is :"<<afd<<endl;
   }
     if(name=="india" )
   {
   afd=price*.80;
   cout<<"final price is :"<<afd<<endl;
   }
     if(name=="england" )
   {
   afd=price*.70;
   cout<<"final price is :"<<afd<<endl;
   }
    if(name=="canada" )
   {
   afd=price*.65;
   cout<<"final price is :"<<afd<<endl;
   }
  }