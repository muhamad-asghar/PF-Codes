#include<iostream>
using namespace std;
void revers(string x);
main()
{
 string x;
 cout<<"enter  a state :";
 cin>>x;
 revers(x);
}
 void revers(string x)
{ 

 if(x=="true")
  {
    cout<<"false";
  }
 if(x=="false")
  {
  cout<<"true";
  }
}