#include <iostream>
using namespace std;
main()
{
    int size;
    int num = 0;
    int sum = 0;

    cout << "enter size :";
    cin >> size;
    int array[3];
    for (int a = 0; a < 3; a++)
    {
        cout << "enter element :";
        cin >> array[a];
        if (array[a] % 2 == 0)
        {
            for (int i = 0; i < array[0]; i++)
            {
                cout<<array[0];
                sum = array[a] - 2;


                cout << sum << ",";
            }
        }
        else

        {
            sum = array[a];
            for (int i = 0; i < array[0]; i++)
            {

                sum + 2;
            }
            cout << sum;
        }
    }
}