#include <iostream>
using namespace std;
main()
{
   int a;
    int size;
    int multi;
    cout<<"enter array size :";
    cin>>size;
    int number[size];
    cout<<"enter multiple number :";
    cin>>multi;
    for(int i=0; i<size ;i++)
    {
        cout<<"enter number :";
        cin>>number[i];
        number[i]*multi;
    
    }
    for(int i=size-1 ;i>=0 ;i--)
    {
        cout<<number[i]*multi<<" ";
    }
}