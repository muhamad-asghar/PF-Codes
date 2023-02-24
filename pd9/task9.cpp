#include <iostream>
using namespace std;
main()
{
    string move[] = {"Shimmy", "Shake", "Pirouette", "Slide", "Box Step", "Headspin", "Dosado", "Pop", "Lock", "Arabesque"};
    string name;
    int a = 0;
    cout << "enter  pin ";
    cin >> name;

    for (int i = 0; name[i] != '\0'; i++)
    {
        if (name[i])
        // if (name[i] != '1' || name[i] != '2' || name[i] != '3' || name[i] != '4' || name[i] != '5' || name[i] != '6' || name[i] != '7' || name[i] != '8' || name[i] != '9' || name[i] != '0')
        {
            cout << "wrong";
            return 0;
        }
    }
    for (int i = 0; name[i] != '\0'; i++)
    {
        a = name[i] - 48 + i;
        move[a] = a;
        cout << move[a];
    }
}
