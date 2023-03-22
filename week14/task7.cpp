#include <iostream>
using namespace std;
void rotate(int arr[], int size);
main()
{
    int position;
    int size;

    cout << "enter array size :";
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cout << "enter element :";
        cin >> arr[i];
    }

    rotate(arr, size);
}
void rotate(int arr[], int size)
{
    int temp;
    temp = arr[0];
    for (int i = 1; i < size; i++)
    {

        arr[i - 1] = arr[i];
    }
    arr[size - 1] = temp;
}