#include<iostream>
#include<conio.h>
using namespace std;
main()
{
    int size;
    cout<<" how many words you want to enter:";
    cin>>size;
    string arr[size];
    for(int i=0;i<size;i++)
    {
        cout<<"enter word "<<i+1<<" :";
        cin>>arr[i];
    }
    char a;
    int cont=0;
    cout<<"character you want to find :";
    cin>>a;
    string temp;
    for(int i=0;i<size;i++)
    {
       
        temp=arr[i];
        
        for(int d=0;temp[d]!='\0';d++)
        {
            if(temp[d]==a)
            {
                cont=cont+1;
            }
            
        }
    }
  
    cout<<cont;
    
    
}