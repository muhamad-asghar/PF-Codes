#include <iostream>
using namespace std;
int fn(int a, int b, int c);

main()
{
    int box,size=0;
    cout << "enter box :";
    cin >> box;
    size=box*3;
    int array[size];
    

    for (int i = 0; i < size; i++)
    {
        cout << "enter dimension :";
        cin >> array[i];
    }
     int volume=0;
    for (int i = 0; i < size; i=i+3)
    {

          int g=fn(array[i], array[i+1], array[i + 2]);
          volume=g+volume;

        

    }
    cout<<volume;
}
int fn(int a, int b, int c)
{
    int vol = 0;
    int d = 0;
    d = a * b * c;
  
    return d;
  
    
    
}
