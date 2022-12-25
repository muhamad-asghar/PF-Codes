#include<iostream>
using namespace std;
main()
{
string name;
int adticketp,chticketp,adticketN,chticketN,Tpcht,Tpadt,sum,percentage;
float aftd,charityamount;
cout<<"adult ticket price :";
cin>>adticketp;
cout<<"child ticket price :";
cin>>chticketp;
cout<<"total adult ticket sold :";
cin>>adticketN;
cout<<"total child ticket sold :";
cin>>chticketN;
cout<<"donated  percentage :";
cin>>percentage;
Tpcht=chticketp*chticketN;
Tpadt=adticketp*adticketN;
sum=Tpadt+Tpcht;
cout<<"total amout genrated :"<<sum<<endl;
charityamount=(percentage*sum)/100;
aftd=sum-charityamount;
cout<<"amount after donation :"<<aftd;

}