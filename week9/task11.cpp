#include <iostream>
using namespace std;
main()
{
    string name;
    

    getline(cin,name);
    int count= name.length();
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