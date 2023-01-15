#include<iostream>
using namespace std;
string activity(string temp,string humid);
main()
{
string temp,humid,result;
cout<<"enter temprature :";
cin>>temp;
cout<<"enter humidity :";
cin>>humid;
result=activity(temp,humid);
cout<<result;
}
 string activity(string temp,string humid)
 {
   string total;
   if(temp=="warm")
   {
    if(humid=="dry")
    {
        total="playtennis";
    }
     if(humid=="humid")
     {
        total="swim"; 
     }
   }
  if(temp=="cold")
  {
    if(humid=="dry")
    {
        total="playbasketball";
    }
    if(humid=="humid")
    {
        total="watchtv";
    }
  }  
     return total;



 }