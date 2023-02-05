#include <iostream>
using namespace std;
main()
{
 string name;
 getline(cin,name);
 int idx=0;
 while(name[idx]!='\0')
 {
    idx=idx+1;
 }
 cout<<idx;

}