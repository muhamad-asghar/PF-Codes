#include<iostream>
using namespace std;
void swapnumber(int &number1,int &number2);
main()
{
    int number1=10;
    int number2=15;
    swapnumber(number1,number2);
    cout<<"number1 :"<<number1<<endl;
    cout<<"number2 :"<<number2<<endl;
}
void swapnumber(int &number1,int &number2)
{
   int temp=number1;
   number1=number2;
   number2=temp;
}