#include<iostream>
using namespace std;
char matrix[5][5]={{'.', '.', '.', '*', '*'},
                    {'.', '*', '.', '.', '.'}, 
                    {'.', '*', '.', '.', '.'}, 
                    {'.', '*', '.', '.', '.'},
                    {'.', '.', '*', '*', '.'}};
string isboom(string input)
main()
{
    string input;
    cout<<"enter cooridnates :";
    cin>>input;
    cout<<isboom(input);
   
}
string isboom(string input)
{
    string input;
    char row=input['0'];
    char col=input['1'];
    int colidx= int (col)-'0';
    int rowidx;
    if(row=='a')
    {
        rowidx=0;
    }
   else if(row=='b')
    {
        rowidx=1;
    }
    else if(row=='c')
    {
        rowidx=2;
    }
    else if(row=='d')
    {
        rowidx=3;
    }if(row=='e')
    {
        rowidx=4;
    }
    string result;
    if(matrix[rowidx][colidx]=='.')
    {
        result="splash";
    }
   else if(matrix[rowidx][colidx]=='*')
    {
        result="boom";
    }
  return result
}