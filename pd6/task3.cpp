#include <iostream>
using namespace std;
string sign(string month, int day);
main()
{
    string month, result;
    int day;
    cout << "enter month :";
    cin >> month;
    cout << "enter day :";
    cin >> day;
    result=sign(month,day);
    cout<<result;
}
    string sign(string month, int day)
    {
        string result;
        if(month=="march")
        {
            if(day>=21 && day<=31)
            {
                result="aries";
            }
        }
        else if(month=="april")
        {
            if(day>=1 && day <=19)
            {
                result="aries";
            }
        }
        else if(month=="april")
        {
            if(day>=20 && day <=30)
            {
                result="tauras";
            }
        }
        else if(month=="may")
        {
            if(day>=1 && day <=20)
            {
                result="tauras";

            }
        }
        else if(month=="may")
        {
            if(day>=21 && day <=31)
            {
                result="gemini";

            }
        }    
        else if(month=="june")
        {
            if(day>=1 && day <=20)
            {
                result="gemini";

            }
        }    
        else if (month=="june")
        {
            if(day>=21 && day<=30 )
            {
                result ="cancer";

            }
        }  
        else if(month=="july")
        {
            if(day>=1 && day <=22)
            {
                result="cancer";

            }
            if(day>=23 && day <=31)
            {
                result="leo";
            }
        }
        else if(month=="august")
        {
            if(day>=1 && day <=22)
            {
                result="leo";

            }
            if(day>=23 && day <=31)
            {
                result="virgo";
            }
        
            
        }
        else if (month=="september")
        {
            if(day>=1 && day <=22)
            {
                result="virgo";

            }
            if(day>=23 && day <=30)
            {
                result="libra";
            }
        }
        else if(month=="october")
        {
            if(day>=1 && day <=22)
            {
                result ="libra";

            }
            if(day>=23 && day<=31)
            {
                result="scorpio";
            }

        }
        else if(month=="november")
        {
            if(day>=1 && day<=21)
            {
                result="scorpio";

            }
            if(day>=22 && day <=30)
            {
                result="sagittarius";

            }

        }
        else if(month=="december")
        {
            if(day>=1 && day <21)
            {
                result="sagittarius";
            }
        }





            return result;

    }