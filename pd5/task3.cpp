#include<iostream>
using namespace std;
float taxcalculater(char type, float price);
 
main()
 { 
     float price,totalprice;
     char type;
     cout<<"enter price :";
     cin>>price;
     cout<<"enter type :";
     cin>>type;
     totalprice=taxcalculater(type,price);
     cout<<"final price is  :"<<totalprice<<endl;



 }
  float taxcalculater(char type, float price)
  {
   float taxamount,finalprice;

   if(type=='m')
   {
    taxamount=price*(6/10000);
    finalprice=price+taxamount;
    return finalprice;

   }
    if(type=='e')
    {
        taxamount=(price*.08)/100;
        finalprice=price+taxamount;
         return finalprice;
    }
    if(type=='s')
    {
        taxamount=(price*.010)/100;
        finalprice=price+taxamount;
         return finalprice;
    }
    if(type=='v')
    {
        taxamount=price*.012/100;
        finalprice=price+taxamount;
         return finalprice;
    }
    if(type=='t')
    {
        taxamount=(price*.015)/100;
        finalprice=price+taxamount;
         return finalprice;
    }
    return 0;
  }
  