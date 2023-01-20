#include<iostream>
using namespace std;
void febnachi(int number);
main()
{
int number;
cout<<"enter number :";
cin>>number;
febnachi(number);


}
 void febnachi(int number)
 {
    int pre=0;
    int curr=1;
    int next;
    cout<<pre<<" , "<<curr;
    for(int count=1;count<=number-2;count++)
    {
        next=pre+curr;
        cout<<","<<next;
        pre=curr;
        curr=next;


    }
 }