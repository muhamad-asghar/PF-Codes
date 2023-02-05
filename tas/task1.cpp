#include <iostream>
using namespace std;
int a = 20;
int sum(int a, int b);
main ()
{
 int a = 10;
 int b = 20;
 int c = 0;
 cout << "value of a in main() = " << a << endl;
 c = sum( a, b);
 cout << "value of c in main() = " << c << endl;
}
/* function to add two integers */
int sum(int a, int b)
{
 cout << "value of a in sum() = " << a << endl;
 cout << "value of b in sum() = " << b << endl;
 return a + b;
}