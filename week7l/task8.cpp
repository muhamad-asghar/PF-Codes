#include <iostream>
using namespace std;
float money(int age, float inher);
main()
{
    float inher, age;
    float result;
    cout << "age :";
    cin >> age;
    cout << "price :";
    cin >> inher;
    result = money(age, inher);
    if (result > 0)
    {
        cout << "yes !" << result << "left";
    }
    else
    {
        cout << "no !" << (-(result)) << "you need";
    }
}
float money(int age, float inher)
{
    float x = 0;
    float y = 0;
    float z;
    float sum;
    float total=19;
    for (int n = 1800; n <= age; n++)
    {
        total++;
        if (n % 2 == 0)
        {
            x = x + 12000;
        }
    
        else
        {
           
            y = y + 12000 + 50*(total);
        
        }
    }

    sum = y + x;
    ;

    z = inher - sum;
    return z;
}