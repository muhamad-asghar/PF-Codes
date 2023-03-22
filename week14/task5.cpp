#include <iostream>
using namespace std;
bool issprace(int arr[][3], int size);
main()
{
    int size = 3;
    int number[size][3] = {{1, 0, 0},
                           {0, 0, 0},
                           {7, 8, 9}};
    cout << issprace(number, size);
}
bool issprace(int arr[][3], int size)
{
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (arr[i][j] == 0)
            {
                count++;
            }
        }
    }
    float check = (3 * size) / 2;
    bool result;
    if (count > check)
    {
        result = true;
    }
    else
    {
        result = false;
    }
    return result;
}
