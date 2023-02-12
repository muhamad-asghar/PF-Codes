#include <iostream>
using namespace std;
bool check(int left, int cur, int right);
main()
{
    int size;
    int count = 0;
    cout << "enter size :";
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cout << "enter  number :" << i + 1 << " ";
        cin >> arr[i];
    }
    int array2[20];
    bool flage;
    for (int i = 1; i < size - 1; i++)
    {
        flage = check(arr[i - 1], arr[i], arr[i + 1]);
        if (flage == true)
        {
            if (flage = true)
            {
                array2[count] = arr[i];
                count++;
            }
        }
    }
    if (count != 0)
    {
        for (int i = 0; i < count; i++)
        {
            cout << array2[i];
        }
    }
    else
    {
        cout << "no number";
    }
}
bool check(int left, int cur, int right)
{
    if (left < cur && right < cur)
    {
        return true;
    }
    else
    {
        return false;
    }
}