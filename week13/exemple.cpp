#include <iostream>
using namespace std;
main()
{
    int carsdata[5][5] = {{10, 7, 12, 10, 4},
                          {18, 11, 15, 17, 2},
                          {23, 19, 12, 16, 14},
                          {7, 12, 0, 16, 2},
                          {3, 5, 6, 4, 3}};
    for (int row = 0; row < 5; row++)
    {
        for (int col = 0; col< 5; col++)
        {
            cout << carsdata[row][col] << "\t";
        }
        cout << endl;
    }
}