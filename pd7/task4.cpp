#include <iostream>
using namespace std;
void amp(int number);
main()
{
    int number;
    cout << "enter number :";
    cin >> number;
    amp(number);
}
void amp(int number)
{
    int x;
    for (int n = 1; n <= number; n++)
    {
        if (n % 4 == 0)
        {
            x = n * 10;
            cout << x;
            cout<<",";
        }
        else
         {
            cout<<n;
            cout<<",";
         } 

    }
}