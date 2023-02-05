#include <iostream>
#include <conio.h>
using namespace std;
main()
{
    string movies[5] = {"gladiator", "starwars", "terminator", "takinglives", "TombRider"};

    string name;
    int move = 0;

    cout << "enter movie name :";
    cin >> name;
    float price = 0;
    for (int i = 0; i < 5; i++)
    {
        if (name == movies[i])
        {

            move = i;
        }
    }
    if(move%2==0)
    {
        price=500*0.90;
    }
    else
    {
        price=500*0.95;
    }
    cout<<price;
}