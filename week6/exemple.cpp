#include <iostream>
using namespace std;
int isgreatest(int n1, int n2, int n3);
main()
{
    int n1, n2, n3, greater;
    cout << "enter number1 ";
    cin >> n1;
    cout << "enter number2 ";
    cin >> n2;
    cout << "enter number3 ";
    cin >> n3;
    greater = isgreatest(n1, n2,  n3);
    cout<<greater;
}
int isgreatest(int n1, int n2, int n3)
{   int great;
    if (n1 < n2 && n2 < n3)
    {
        great= n3;
    }
    if (n2 < n1 && n3 < n1)
    {
        great= n1;
    }
    if(n2>n1&&n2>n3)
    {
        great= n2;
    }
    return great;
}