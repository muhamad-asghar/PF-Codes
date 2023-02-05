#include <iostream>
using namespace std;
float money(string category, float budget, int people);
main()
{
    int people;
    float budget, total;
    string category;

    cout << "enter people :";
    cin >> people;
    cout << "enter budget :";
    cin >> budget;
    cout << "enter category :";
    cin >> category;
    total = money(category, budget, people);
    if (total > 0)
    {
        cout << "yes! your remaining money is  " << total;
    }
    else
    {
        cout << "no! you need  " << (-(total));
    }
}
float money(string category, float budget, int people)
{
    float result, total;
    float cost = 0;
    float price;
    if (category == "vip")
    {
        if (people >= 1 && people <= 4)
        {
            result = budget * 0.25;
            total = people * 499.99;
            cost = result - total;
        }
        else if (people >= 5 && people <= 9)
        {
            result = budget * .40;
            total = people * 499.99;
            cost = result - total;
        }
        else if (people >= 10 && people <= 24)

        {
            result = budget * .50;
            total = people * 499.99;
            cost = result - total;
        }
    }
    else if (people >= 25 && people <= 49)
    {
        result = budget * .60;
        total = people * 499.99;
        cost = result - total;
    }
    else if (people > 50)
    {
        result = budget * .75;
        total = people * 499.99;
        cost = result - total;
    }

    else
    {
        if (people >= 1 && people <= 4)
        {
            result = budget * 0.25;
            total = people * 249.99;
            cost = result - total;
        }
        else if (people >= 5 && people <= 9)
        {
            result = budget * .40;
            total = people * 249.99;
            cost = result - total;
        }
        else if (people >= 10 && people <= 24)
        {
            result = budget * .50;
            total = people * 249.99;
            cost = result - total;
        }
        else if (people >= 25 && people <= 49)
        {
            result = budget * .60;
            total = people * 249.99;
            cost = result - total;
        }
        else
        {
            result = budget * .75;
            total = people * 249.99;
            cost = result - total;
        }
    }
    return cost;
}
