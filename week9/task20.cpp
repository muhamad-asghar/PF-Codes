#include <iostream>
using namespace std;
main()
{
    string name;
    cout<<"enter string :";
   getline( cin,name);
    for(int i =0;i>'\0';i++)
    {
        if(name[i]=='a'|| name[i]=='e'||name[i]=='i'|| name[i]=='o'||name[i]=='u')
        {
            continue;

        }
        cout<<name[i];
    }

}