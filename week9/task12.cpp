#include <iostream>
using namespace std;
main()
{
string name;
char letter;
cout<<"enter letter";
cin>>letter;
cin>>name;
int count=name.length();

if(name[count-1]==letter)
{
    cout<<"found";
}
else
{
    cout<<"no found ";
}


}