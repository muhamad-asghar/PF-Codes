#include<iostream>
using namespace std;
float discount(string day, string month ,float amount);
main()
{
 string day,month;
 float discounted,amount;
 cout<<"enter month :";
 cin>>month;
 cout<<"enter day :";
 cin>>day;
 cout<<"enter amount :";
 cin>>amount;
 discounted=discount(day,month,amount);
 cout<<discounted;


}
 float discount(string day, string month ,float amount)
 {
  float d;
  if(day=="sunday")
  {
    if(month=="october"||month=="march" ||month=="august")
    {
        d=amount-(amount*10.0)/100;
    }
    
  }
   if(day=="monday"&&(month=="november"||month=="december"))
   {
    d=amount-(amount*5.0)/100;
    
   }
return d;



 }