#include<iostream>
using namespace std;
main()
{
int matric;
float matricage, matric10age;
int ecat;
float ecatage,ecat50age; 
int intermediate;
float intermediateage,intermediate40age;
char name;
float aggregate;
cin>>name;
cin>>matric;
cin>>intermediate;
cin>>ecat;
ecatage=ecat/400;
ecat50age=ecatage*50;
matricage= matric/1100;
matric10age=matricage*10;
intermediateage=intermediate/550;
intermediate40age=intermediateage*40;
aggregate=ecat50age+matric10age+intermediate40age;
cout<<"your aggregate"<<aggregate;


}