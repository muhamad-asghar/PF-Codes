#include <iostream>
using namespace std;
main()
{
    string name;
    int count= name.length();

    getline(cin,name);
    cout<<count;
   if(count%2==0)
   {
    cout<<"even";
   }
   else
   {
    cout<<"odd";
   }
   
    
}