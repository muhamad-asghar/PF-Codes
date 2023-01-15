#include<iostream>
using namespace std;
float cost(string city,string product,int quantity);
main()
{
    float price;
    string city,product;
    int quantity;

    cout<<"enter city : ";
    cin>>city;
    cout<<"enter product :";
    cin>>product;
    cout<<"enter quantity :";
    cin>>quantity;
    price=cost(city,product,quantity);
    cout<<price;



}
  float cost(string city,string product,int quantity)
{
    float result;
    if(city=="sofia")
    {
        if(product=="coffee")
        {
            result=quantity*.50;
        }
        if(product=="water")
        {
            result=quantity*.80;
        }
        if(product=="beer")
        {
            result=quantity*1.2;
        }
        if(product=="sweets")
        {
            result=quantity*1.45;
        }
        if(product=="peanut")
        {
            result=quantity*1.60;
        }
    }
    if(city=="plovdiv")
    {
        if(product=="coffee")
        {
            result=quantity*.40;
        }
         if(product=="water")
        {
            result=quantity*.70;

        }
        if(product=="beer")
        {
            result=quantity*1.5;
            
        }
        if(product=="sweets");
        {
            result=quantity*1.30;
        }
        if(product=="peanut")
        {
            result=quantity*1.50;
        }


    }
        if(city=="varna")
        {
         if(product=="coffee")
        {
            result=quantity*.45;
        }
            if(product=="water")
        {
            result=quantity*.70;
        }
            if(product=="beer")
        {
            result=quantity*1.10;
        }
            if(product=="sweets")
        {
            result=quantity*1.35;
        }
            if(product=="peanut")
        {
            result=quantity*1.55;
        }

        }
       return result;
}
