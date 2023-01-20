#include <iostream>
using namespace std;
void printtabl(int number);

main()
{
   int number;
   cout<<"enter number :";
   cin >>number;

   printtabl(number);
    
}
 void printtabl(int number)
 {
    for(int count=1; count <=10;count++)
    
    cout<<number <<"*"<<count<<"="<<number*count<<endl;
 }
