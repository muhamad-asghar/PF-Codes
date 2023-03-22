#include<iostream>
using namespace std;
int matrix[3][3]={{1,0,0},
                 {0,1,0,},
                 {0,0,1}};
bool istrue();
main()
{
   cout<< istrue();
}
bool istrue()
{
    bool flage=true;
    for(int row=0;row<3;row++)
    {
        for(int col=0;col<3;col++)
        {
            if(row==col && matrix[row][col]!=1)
            {
             flage=false; 
            }
            else if (row!=col && matrix[row][col]!=0)
            {
             flage=false;
            }
        }
    }
    return flage;
}

