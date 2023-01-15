#include <iostream>
using namespace std;
string checktitle(float age char title);
main()
{
    float age;
    char title;
    string name;
    cout << "enter age  :";
    cin >> age;
    cout << "enter title for male :";
    cin >> title;
    name = checktitle(age, title);
    cout<<name;
}
string checktitle(char title, float age)
{
    string result;
    if (title == 'm')
    {
        if (age >= 16)
        {
            result = "mr";
        }
        if (age < 16)
        {
            result = "master";
        }
    }
    if (title == 'f')
    {
        if (age >= 16)
        {
            result = "ms";
        }
        if (age < 16)
        {
            result = "miss";
        }
    }
    return result;
}
