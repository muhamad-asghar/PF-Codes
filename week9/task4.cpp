#include <iostream>
using namespace std;
main()
{
    int number;
    int size;
    cout<<"enter size of array :";
    cin>>size;
    int arr[size];
    for(int i=0; i<size ;i++)
    {
        cout<<"enter number :";
        cin>>arr[i];

    }
    for(int i=size-1;i>=0;i--)
    {
        cout<<arr[i]<<" ";
    }
}