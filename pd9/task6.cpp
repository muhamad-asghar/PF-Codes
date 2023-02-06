#include <iostream>
using namespace std;
int fn(int n1, int n2);
main()
{
    int size;
    int num = 0;
    int sum = 0;

    int array[3];
    int arr[3];
    for (int a = 0; a < 3; a++)
    {
        cout << "enter element :";
        cin >> array[a];
    }
    for (int a = 0; a < 3; a++)
    {
        arr[a] = fn(array[0], array[a]);
    }
    for (int a = 0; a < 3; a++)
    {
        cout << arr[a] << " ";
    }
}
int fn(int n1, int n2)
{
    int sum = 0;
    if (n1 == 0)
    {
        n1 = 10;
        if (n2 % 2 == 0)
        {
            sum = n2 - (2 * n1);
        }

        else
        {
            sum = n2 + (2 * n1);
        }
    }
    else
    {

        if (n2 % 2 == 0)
        {
            sum = n2 - (2 * n1);
        }

        else
        {
            sum = n2 + (2 * n1);
        }
    }
    return sum;
}