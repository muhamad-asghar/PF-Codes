#include <iostream>
using namespace std;
main()
{
    int size;
    int sum = 0;
    cout << " enter size of array :";
    cin >> size;
    float rt[size];
    for (int i = 0; i < size; i++)
    {
        cout << "enter resistence :";
        cin >> rt[i];
        sum = sum + rt[i];
    }
    cout<<"total resistence is:"<<sum<<"ohms";
}