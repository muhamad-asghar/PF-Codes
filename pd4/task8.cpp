#include<iostream>
using namespace std;
void isequal(int x,int y);
main()
{
 int x,y;
 cout<<"enter x :";
 cin>>x;
 cout<<"enter y :";
 cin>>y;
 isequal(x,y);
}
 void isequal(int x,int y)
 {
 if(x==y)
  {
    cout<<"true";
  }
 if(x!=y)
  {
  cout<<"false";
  }
}