#include<iostream>
using namespace std;
main()
{
    int number=10;
    int*p=&number;
    cout<<"address of number is  :"<<p<<endl;
    cout<<"value of pointer is :"<<*p;
}