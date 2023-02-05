#include<iostream>
using namespace std;
main()
{
    
    int size1,size2;
    cout<<"enter array size 1 :";
    cin>>size1;
     cout<<"enter array size 2 :";
    cin>>size2;
    int array1[size1];
    int array2[size2];
    for(int i=0;i<2;i++)
    {
        cout<<"enter element of array 1 ";
        cin>>array1[i];

    }
    for(int i=0;i<size2;i++)
    {
        cout<<"enter element of array 2";
        cin>>array2[i];

    }
    cout<<"array after merging ";
     int c=size1+size2;
    int array3[c];
    for(int i=0 ;i<1;i++)
    {
        array3[i]=array1[i];
    }
    for(int i=0;i<size2;i++)
    {
        array3[1+i]=array2[i];

    }
    
    
        array3[c-1]=array1[1];
        for(int i=0;i<c;i++)
        {
            cout<<array3[i]<<",";
        }
    
    
}