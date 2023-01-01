#include<iostream>
#include<windows.h>
using namespace std;
void gotoxy(int x,int y);
void A();
void S();
void G();
void H();
void R();
main()
{
 int x,y; 
 system("cls");
 A();
 gotoxy(4,5);
 S();
  gotoxy(6,5);
 G();
  gotoxy(8,5);
 H();
  gotoxy(10,5);
 A();
 gotoxy(12,5);
 R();
  gotoxy(14,5);
 
}
 void A()
 {
 cout<<"                     ##       "<<endl;
 cout<<"                   ##  ##"<<endl;
 cout<<"                  ##    ##"<<endl;
 cout<<"                  ########"<<endl;
 cout<<"                  ##    ##"<<endl;
 cout<<"                  ##    ##"<<endl;
 }
 void S()
 {
 cout<<"                       ##"<<endl;
 cout<<"                     #     #"<<endl;
 cout<<"                    #     "<<endl;
 cout<<"                     # ##"<<endl;
 cout<<"                         ##"<<endl;
 cout<<"                    #      #"<<endl;
 cout<<"                      # # #"<<endl;

 }
 void G()
 {
 cout<<"                           # # #"<<endl;
 cout<<"                         #      #"<<endl;
 cout<<"                        #        "<<endl;
 cout<<"                        #    ########   "<<endl;
 cout<<"                         #       #  #   "<<endl;
 cout<<"                           #  # "<<endl;
 }
 void H()
 {
  cout<<"                          #         #"<<endl;
  cout<<"                          #         #"<<endl;
  cout<<"                          # # # # # #"<<endl;
  cout<<"                          #         #"<<endl;
  cout<<"                          #         #"<<endl;
  }
 void R()
 {
 cout<<"                             ####"<<endl;
 cout<<"                             #    #"<<endl;
 cout<<"                             ######"<<endl;
 cout<<"                             #  ##  "<<endl;
 cout<<"                             #    #"<<endl;
 }
  void gotoxy(int x,int y)
 {
 COORD coordinates;
 coordinates.X=x;
 coordinates.Y=y;
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
 }
