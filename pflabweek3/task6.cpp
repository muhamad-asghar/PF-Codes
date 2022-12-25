#include<iostream>
using namespace std;
main()
{
float matric;
float matricage, matric10age;
float ecat;
float ecatage,ecat50age; 
float intermediate;
float intermediateage,intermediate40age;
string name;
float aggregate;
cout<<"name :";
cin>>name;
cout<<"matric marks : ";
cin>>matric;
cout<<"intermediate marks: ";
cin>>intermediate;
cout<<"ecat marks : ";
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