#include<iostream>
using namespace std;
main()
{
    string name;
    bool runing=true;
    while(runing)
    {
        cin>>name;

        if(name=="end")
        {
            runing=false;
        }
    }

    cout<<"end";
}