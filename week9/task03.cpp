#include <iostream>
using namespace std;
main()
{
    int size;
    int fndnum;
    bool isfound;

    cout << "enter array size :";
    cin >> size;
    cout << "number want to find ";
    cin >> fndnum;
    int number[size];
    for (int i = 0; i < size; i++)
    {
        cout << "enter a number :";
        cin >> number[i];
        if (fndnum == number[i])
        {
            isfound=true;
            break;
        }
    }
    if(isfound==true)
    {
        cout<<"yes";
    }
    else
    {
        cout<<"no";
    }
}