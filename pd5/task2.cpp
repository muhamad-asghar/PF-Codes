#include<iostream>
using namespace std;

float pvolume(float l,float h,float w);

main()
 {
    float vol,l,h,w;
    vol= pvolume(l,h,w);
    cout<<vol<<"cubic centimeter";
 }
  float pvolume(float l,float h,float w)
   {
    float volume,cbcm,cml,cmh,cmw;
    cout<<"enter height in meter :";
    cin>>h;
    cout<<"enter length in meter :";
    cin>>l;
    cout<<"enter width in meter :";
    cin>>w;
    cml=l*100;
    cmh=h*100;
    cmw=w*100;
    volume=(cmh*cml*cmw)/3;
    cbcm=volume*1000000;
     return cbcm;
   } 
    