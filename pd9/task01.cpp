#include <iostream>
#include <conio.h>
using namespace std;
main()
{

    string fruit[4] = {"peach", "apple", "guava", "watermelon"};
    int price[4] = {60, 70, 40, 30};
    string f;
    int quan, c;
    cout << "enter the name of fruit :";
    cin >> f;
    cout << "enter quantity of fruit :";
    cin >> quan;
    for (int i = 0; i < 4; i++)
    {
        if (f == fruit[i])
        {
            c = price[i] * quan;

            cout << c;
        }
    }
}