#include<iostream>
using namespace std;
main()
{
    string s1,s2;
    int cont=0;
    cout<<"enter string :";
    cin>>s1;
     cout<<"enter string :";
    cin>>s2;
    
    for(int a=0;s1[a]!='\0';a++)
    {
        for(int i=0;s2[i]!='\0';i++)
        {
            if(s2[i]==s1[a])
            {
                s1[a]='-';
                cont=cont+1;
                
            }
        }
    }
    cout<<cont;


}