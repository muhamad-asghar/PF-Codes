#include <iostream>
using namespace std;
int main()
{
    int size;
    cout << "enter size of array :";
    cin >> size;
    float cgpa[size];
    for (int idx = 0; idx < size; idx++)
    {
        cout << "enter value :";
        cin >> cgpa[idx];
    }
    for (int idx = 0; idx < size; idx++)
    {
        cout <<cgpa[idx]<<" ";
    }
}
