#include<iostream>
using namespace std;
int totaldigit(int number1,int number2);
main()
{
    int number1,number2,result;

    cout<<"enter number1 ";
    cin>>number1;
    cout<<"enter number2 ";
    cin>>number2;
   result= totaldigit(number1,number2);
  cout<<result;
}
 int totaldigit(int number1,int number2)
 {
    int count=0;
    while(number1>0)
    {
        number1=number1/10;
        if(number1==number2)
        {
        count++;
        }
    }
    return count;
 }
