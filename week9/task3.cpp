#include <iostream>
using namespace std;
main()
{
    int size;
    int sum = 0;
    float avg;
    cout << "enter size of array :";
    cin >> size;
    int number[size];
    for (int idx = 0; idx < size; idx++)
    {
        cout << "enter value :";
        cin >> number[idx];
        sum = sum + number[idx];
    }
    cout << sum << endl;
    avg = sum / size;
    cout << avg;
}
