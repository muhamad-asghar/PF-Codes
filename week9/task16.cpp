#include <iostream>
using namespace std;
main()
{
    int size;
    int fndnum;
    bool isfound = false;
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
            isfound = true;
            
        }
    }
    if (isfound == true)
    {
        cout << "already exist";
    }
    else
    {
        cout << "no";
    }
}