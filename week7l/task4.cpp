#include<iostream>
using namespace std;
int check(int number1,int number2);
main()
{
    int number1,number2;

    cout<<"enter number1 ";
    cin>>number1;
    cout<<"enter number2 ";
    cin>>number2;
   cout<< check(number1,number2);

}
 int check(int number1,int number2)
 {
    int count=0;
    int digit;
    while(number1>0)
    {
        digit=number1%10;
        number1=number1/10;

        if(digit==number2)
        {
        count++;

        }
    }
    return count;
 }
