#include<iostream>
using namespace std;
char grade(int marks);
main()
{
 int marks;
 char result;
 cout<<"enter marks :";
 cin>>marks;
 result=grade(marks);
 cout<<"your grade is :"<<result;
}
  char grade(int marks)
  {
    char small;
    if(marks<50)
    {
        small='f'; 
    }
    else if(marks<60 && marks>50)
    {
        small='e';
    }
     else if (marks<70 && marks >60)
     {
        small='d';

     }
     else if(marks<80 marks >70)
     {
        small='c';
     }
     else if(marks<=85)
     {
      small='b';
     }
     else 
     {
        small='a';

     }
       return small;
  }