#include<iostream>
using namespace std;
float totalprice(string screen,int rows, int columns);
main()
{
    string screen;
    int rows, columns;
    float price;
    cout<<"enter rows :";
    cin>>rows;
    cout<<"enter columns :";
    cin>>columns;
    cout<<"enter screen :";
    cin>>screen;
    price=totalprice(screen,rows,columns);
    cout<<price;

} 
   float totalprice(string screen,int rows, int columns)
   {
     float result;
     seats=rows*columns;
     if(screen=="premiere")
     {
        result=seats*12.00;
     }
     if(screen=="normal")
     {
      result=seats*7.50;
     }
     if(screen=="discount")
     {
      result=seats*5.00;
     }



   }