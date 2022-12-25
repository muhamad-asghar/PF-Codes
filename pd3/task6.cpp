#include<iostream>
using namespace std;
main()
{
float size,cost,area,costpp,costpsf;
cout<<"enter bag size in pound :";
cin>>size;
cout<<"cost of bag :";
cin>>cost;
cout<<"area square feet coverd by bag :";
cin>>area;
costpp=cost/size;
cout<<"cost of fertilizer per pound :"<<costpp<<endl;
costpsf=size*area;
cout<<"cost of fertilizing area per square feet :"<<costpsf;

}



