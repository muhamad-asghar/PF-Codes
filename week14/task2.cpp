#include<iostream>
using namespace std;
void changenumber(int &number);
main()
{
    int number=10;
    changenumber(number);
    cout<<"value in main :"<<number<<endl;

}
void changenumber(int &number)
{
    ++number;
    cout<<"value in function :"<<number<<endl;
}