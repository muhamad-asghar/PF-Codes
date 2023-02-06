#include <iostream>
using namespace std;
main()
{
    int size;
    int x = 0;
    int s = 0;
    cout << " enter pencil colors  ";
    cin >> size;
    string array[size];
    for (int i = 0; i < size; i++)
    {
        cout << "enter colors :";
        cin >> array[i];
    }
    for (int idx = 1; idx < size; idx++)
    {
        if (array[idx - 1] != array[idx])
        {
            x++;
            cout << x << endl;
        }
    }

    int y = size * 2;
    int w = x + y;
    cout << w;
}