#include<iostream>
using namespace std;
void discount(string day,float purchaseamount);
main()
{
 string day;
 float purchaseamount;
 while(true)
 {
 cout<<"enter  day";
 cin>>day;
 cout<<"enter purchaseamount :";
 cin>>purchaseamount;
 discount(day,purchaseamount :);
 }
}
 void discount(string day,float purchaseamount)
 
 { 
  float result,payableamount;
  result=purchaseamount*.1;
  payableamount=purchaseamount-result;
 if(day=="sunday")
 {
  cout<<"payable amount is"<<payableamount<<endl;
 }
}
