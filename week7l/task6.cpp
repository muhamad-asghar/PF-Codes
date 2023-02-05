#include <iostream>
using namespace std;
int calculategcd(int number1, int number2);
int calculatelcm(int number1, int number2, int gcd);
main()
{
    int number1, number2, gcd;
    cout << "enter number1 :";
    cin >> number1;
    cout << "enter number2 :";
    cin >> number2;
    gcd=calculategcd(number1, number2);
    cout<<gcd<<endl; 
    cout << calculatelcm(number1, number2, gcd);
}
int calculategcd(int number1, int number2)
{
    int shorter ;
    int gc;
    if (number1 < number2)
    {
        shorter = number1;
    }
    else
    {
        shorter = number2;
    }
    for (int n=1 ;n<= shorter;n++)
    {
        if (number1 % n == 0 && number2 % n == 0)
        {
          gc= n;

        }
    }

    return gc ;
}
int calculatelcm(int number1, int number2, int gcd)
{
    int lcm;
    lcm = (number1 * number2) / gcd;
   
    return lcm;
}
