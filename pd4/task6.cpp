#include<iostream>
#include<windows.h>
using namespace std;
void gotoxy(int x,int y);
void A();
void W();
void I();
void S();
main()
{
 system("cls");
 A();
  gotoxy(4,5);
 W();

  gotoxy(4,6);
 A();

  gotoxy(4,7);
 I();
  gotoxy(4,8);
 S();
  gotoxy(4,9);

 
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
 void W()
 {
 cout<<"             #            #         "<<endl;
 cout<<"             #            #          "<<endl;
 cout<<"              #    #     #         "<<endl;
 cout<<"               #  ####  #     "<<endl;
 cout<<"                # #  # #                 "<<endl;
 cout<<"                #      #                       "<<endl;
 }
 void I()
 {
  cout<<"               @           "<<endl;
  cout<<"               #             "<<endl;
  cout<<"               #           "<<endl;
  cout<<"               #          "<<endl;
  cout<<"               #            "<<endl;
  }

  void gotoxy(int x,int y)
 {
 COORD coordinates;
 coordinates.X=x;
 coordinates.Y=y;
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
 }
