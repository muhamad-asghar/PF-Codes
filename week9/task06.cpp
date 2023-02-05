#include <iostream>
using namespace std;
main()
{
    int number;
    int size;
    cout << "enter array size :";
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cout << "enter number :";
        cin >> arr[i];
    }
    int small = arr[0];
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < small)
        {
            small = arr[i];
        }
    }
    cout << small;
}