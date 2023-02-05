#include <iostream>
using namespace std;
main()
{
    float arr[4];
    float sum = 0;
    float total;
    cout << "you want to pay ";
    cin >> total;
    int i = 0;
    while (i < 4)
    {
        cout << "enter cents :";
        cin >> arr[i];
        i++;
    }
    float a = arr[0] * 0.25;
    float b = arr[1] * 0.10;
    float c = arr[2] * 0.05;
    float d = arr[3] * 0.01;
    sum = a + b + c + d;
    if (sum >= total)

    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }
}
