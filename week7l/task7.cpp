#include <iostream>
using namespace std;
float money(int age, int price, int pric);
main()
{
    int age, price, pric;
    float result;
    cout << "age :";
    cin >> age;
    cout << "machine price :";
    cin >> price;
    cout << "toy price :";
    cin >> pric;
   result= money(age,price,pric);
   if(result>0)
   {
    cout<<"yes! "<<result<<" reamins";
   }
   else
   cout<<"no !"<<-(result);
}
float money(int age, int price, int pric)
{
    int toys = 0;
    int usd = 0;
    int ussd = 0;
    int count = 0;
    int t,sum,to;
    float u;
    for (int n = 1; n <= age; n++)
    {
        if (n % 2 != 0)
        {
            toys++;
        }
        else
        {
            count++;
            usd = usd + 10;
            ussd = (ussd + usd);
    
            to=ussd-count;
            
        }
      
      
       
    }
    t=toys*pric;
    sum=to+t;
    u=sum-price;
    return u;
}
