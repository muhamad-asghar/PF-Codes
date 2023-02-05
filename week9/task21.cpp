#include <iostream>
using namespace std;
main()
{
    string name;
    cout << "enter string :";
    getline(cin, name);
    int c = name.length();
    for (int i = 0; i < c; i++)

    {

        if (name[i] == 'a' || name[i] == 'e' || name[i] == 'i' || name[i] == 'o' || name[i] == 'u')
        {
            continue;
        }
        else
        {
            cout << name[i];
        }
    }
}