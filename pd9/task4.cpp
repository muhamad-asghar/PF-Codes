#include <iostream>
#include <conio.h>
using namespace std;
main()
{
    int size;
    cout << "enter size of array :";
    cin >> size;
    bool a = false;
    int array[size];
    for (int i = 0; i < size; i++)
    {
        cout << "enter element of array ";
        cin >> array[i];
        if (array[i] > 9)
        {
            int b = 0;
            while (b != 7)
            {
                b = array[i] % 10;
                array[i] = array[i] / 10;
            }
            a = true;
        }
        else if (array[i] == 7)
        {
            a = true;
        }
    }

    if (a == true)
    {
        cout << "bomb";
    }
    else
    {
        cout << " not 7";
    }
}
