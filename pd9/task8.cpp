#include <iostream>
using namespace std;
main()
{
    int size;
    int x = 0;
    int s = 0;
    cout << " enter pencil colors  ";
    cin >> size;
    string array[size];
    for (int i = 1; i <= size; i++)
    {
        cout << "enter colors :";
        cin >> array[i];
        s = i;
    }
    

   
    x=1*size-1;

    int y = size * 2;
    int w = x + y;
    cout << w;
}