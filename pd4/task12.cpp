#include<iostream>
using namespace std;
main()
{
 int red, white,tulips;
float redp,whitep,tulipsp,tp,dp;
 cout<<"red rose :";
 cin>>red;
 cout<<"white rose :";
 cin>>white;
 cout<<"tulips rose :";
 cin>>tulips;
 redp=red*2.00;
 whitep=white*4.10;
 tulipsp=tulips*2.50;
 tp=redp+whitep+tulipsp;
  if(tp>200)
   {
    dp=tp*.80;
    cout<<"after discount price is :"<<dp<<endl;
    cout<<"total price is :"<<tp<<endl;
    }
}