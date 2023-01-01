#include<iostream>
using namespace std;
void sped(float speed );
main()
{
 float speed;
  while(true)
  {
   sped(speed);
  }
}
 void sped(float speed ) 
 { 
 cout<<"enter speed : ";
 cin>>speed;
  if(speed<=100)
   {
    cout<<"your are going right "<<endl;
   }
  if(speed >100)
   {
    cout<<"your will be challenged"<<endl;
   }
 }