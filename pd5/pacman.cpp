#include<iostream>
#include<windows.h>
using namespace std;
void erase(int x,int y)
void getCharAtxy (short int x,short int y);
void printmaze();
void gotoxy(int x,int y);
void printpacman(int x,int y);
main()
{
   printmaze();
   printpacman(x,y);
   erase(x,y);
   gotoxy(x,y);
   getCharAtxy(x,y)
}
  void printmaze()
 {
   cout<<"######################"<<endl;
   cout<<"#                    #"<<endl;
   cout<<"#                    #"<<endl;
   cout<<"#                    #"<<endl;
   cout<<"#                    #"<<endl;
   cout<<"#                    #"<<endl;
   cout<<"#                    #"<<endl;
   cout<<"#                    #"<<endl;
   cout<<"#                    #"<<endl;
   cout<<"#                    #"<<endl;
   cout<<"#                    #"<<endl;
   cout<<"#                    #"<<endl;
   cout<<"######################"<<endl;


 }
 void erase(int x int y)
 {
  gotoxy(x,y)
  cout<<" ";

 }
  void gotoxy(int x,int y)
  {
   COORD Coordinates;
   Coordinates.X=x;
   Coordinates.Y=y;
   SetConsoleCursorPosition(GetStdhandle(STD_OUTPUT_HANDLE),Coordinates);

  }
  void getCharAtxy (short int x,short int y)
  {
   CHAR-INFO-ci;
   COORD xy={0,0};
   SMALL_RECT rect= {x,y,x,y};
   COORD coordBufsize;
   coordBufsize.x=1;
   coordBufsize.y=1;
   return ReadConsoleOutput(GetStdHandle(GET-STD-HANDLE),& ci ,coordBufsize ,xy, &rect) ? ci.Char.AsciiChar :' '



  }
