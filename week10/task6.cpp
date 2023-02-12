#include <iostream>
using namespace std;
main()
{
    int size, i, j;
    cout << "enter size :";
    cin >> size;
    int array[size];
    for (int i = 0; i < size; i++)
    {
        cout << "enter array element :";
        cin >> array[i];
    }

    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            
                if (array[i] > array[j])
                {
                    int a = array[i];
                    array[i] = array[j];
                    array[j] = a;
                }
            
        }
    }
    for (int i = 0; i < size; i++)
    {
        cout << array[i];
    }
}