#include <iostream>
using namespace std;
int array[50];


bool cycle(int a, int size);
main()

{
    int size;
    cout << "enter size array :";
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }
    int a;
    cout << "enter cycle :";
    cin >> a;
    cout << cycle(a, size);
}

bool cycle(int a, int size)
{
    int count = 0;
    
    if (a > size)
    {
        return true;
    }
    else
    {
        if (a < size)
        {
            for (int i = 0; i < size; i++)
            {
                if (array[i+a] == array[i])
                {

                    count++;
                }
                else if(array[i]==array[i+1])
                {
                    count ++;
                }
            }
            if (count == a)
            {
                return true;
            }
            else if(count==size)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
    }
}
