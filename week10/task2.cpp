#include <iostream>
#include <conio.h>
using namespace std;
int number[20];
int check(int size);

main()
{
    int size;

    cout << "enter number of sturday :";
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        cout << "enter miles progres :";
        cin >> number[i];
    }
    cout << check(size);
}
int check(int size)
{
    int count = 0;

    for (int i = 0; i < size-1; i++)
    {
        if (number[i] > number[i + 1])

        {

            count = count + 1;
        }
    }
    return count;
}