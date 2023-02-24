#include <iostream>
#include <conio.h>
using namespace std;
main()
{
    int size = 4;
    string array[size];
    int b = 0;
    int c = 0;
    for (int i = 0; i < size; i++)
    {
        cout << "enter array element :";
        cin >> array[i];

        if (array[0] == array[i])
        {
            b = b + 1;
        }
    }

    if (b == size)
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }
}
