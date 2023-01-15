#include <iostream>
using namespace std;
main()
{
    string fruit, days;
    float q;
    float r;
    cout << "enter fruit :";
    cin >> fruit;
    cout << "enter days :";
    cin >> days;
    cout << "enter  quantity :";
    cin >> q;

    if (days == "sunday" || days == "saturday")
    {
        if (fruit == "banana")
        {
            r = q * 2.70;
            cout << r;
        }
        else if (fruit == "apple")
        {
            r = q * 1.25;
            cout << r;
        }
       else if (fruit == "orange")
        {
            r = q * .90;
            cout << r;
        }
       else if (fruit == "grapefruit")
        {
            r = q * 1.60;
            cout << r;
        }
        else if (fruit == "kiwi")
        {
            r = q * 3.00;
            cout << r;
        }
        else if (fruit == "pineapple")
        {
            r = q * 5.60;
            cout << r;
        }
        else if (fruit == "grapes")
        {
            r = q * 4.20;
            cout << r;
        }
    }
    else if (days == "monday" || days == "tuesday" || days == "wednesday" || days == "thursday" || days == "friday")
    {
        if (fruit == "banana")
        {

            r = q * 2.50;
            cout << r;
        }
        else if (fruit== "apple")
        {
            r = q * 1.20;
            cout << r;
        }
        else if (fruit== "orange")
        {
            r = q * .85;
            cout << r;
        }
        else if (fruit == "grapefruit")
        {
            r = q * 1.45;
            cout << r;
        }
        else if (fruit == "kiwi")
        {
            r = q * 2.70;
            cout << r;
        }
        else if (fruit == "pineapple")
        {
            r = q * 5.50;
            cout << r;
        }
        else if (fruit == "grapes")
        {
            r = q * 3.85;
            cout << r;
        }
    }

    else

    cout<<"error";
}