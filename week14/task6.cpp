#include<iostream>
using namespace std;
void mergarrays(int array1[] ,int size1,int array2[],int size2,int array3[],int size3);
main()
{
    int size1=2;
    int size2=3;
    int size3=size1+size2;
    int arr1[size1]={1,2};
    int arr2[size2]={1,2,3};
    int arr3[size3];
     mergarrays(arr1,size1,arr2,size2,arr3,size3);

}
void mergarrays(int array1[] ,int size1,int array2[],int size2,int array3[],int size3)
{
    for(int i=0;i<size1;i++)
    {
        array3[i]=array1[i];
    }
     for(int j=0;j<size2;j++)
    {
       int i=size1+j;
        array3[i]=array2[j];
    }
   for(int idx=0;idx<size3;idx++)
   {
    cout<<array3[idx]<<" ";
   }
}