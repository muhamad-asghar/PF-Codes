#include <iostream>
using namespace std;
main()
{
    float eng, math, chem, ssc, bio, tm, perc;
    string name;

    cout << "enter name :";
    cin >> name;
    cout << "enter english marks :";
    cin >> eng;
    cout << "enter math marks :";
    cin >> math;
    cout << "enter chemistry marks :";
    cin >> chem;
    cout << "enter social science marks :";
    cin >> ssc;
    cout << "enter biology marks :";
    cin >> bio;
    tm = eng + math + chem + ssc + bio;
    cout << "total marks are :" << tm << endl;
    perc = (tm / 500) * 100;

    if (perc > 90 && perc < 100)
    {
        cout << "your grade is A+";
    }
    else if (perc > 80 && perc <= 90)
    {
        cout << "your grade A";
    }
    else if (perc > 70 && perc <= 80)
    {
        cout << "your grade is B+";
    }
    else if (perc > 60 && perc <= 70)
    {
        cout << "your grade is B";
    }
    else if (perc > 50 && perc <= 60)
    {
        cout << "your grade is C";
    }
    else if (perc > 40 && perc <= 50)
    {
        cout << "your grade is D";
    }
    else 
    {
        cout<<"your grade is F"
    }
}