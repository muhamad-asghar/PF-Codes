#include <iostream>
using namespace std;
printtable(int number);

main()
{
   int number;
   cout<<"enter number :";
   cin >>number;

   printtable(number);
    
}
 printtable(int number)
 {
    for(int count=1; count <=10;count++)
    cout<<number <<"*"<<count<<number*count<<endl;
 }
