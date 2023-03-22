#include <iostream>
using namespace std;
int matrix[4][3] = {{0, 0, 0},
                    {0, 1, 2},
                    {0, 0, 0},
                    {2, 1, 0}};
bool ischeck(int row, int nextrow);
main()
{
    int count=0;
    for (int row = 0; row < 4; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            for (int i = 1; i < ; i++)
            {
                if (matrix[row][col] == matrix[i][col])
                {
                    count++;
                }

            }
        }
    }
    cout<<count;
}
