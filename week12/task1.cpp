#include <fstream>
#include <iostream>
#include <conio.h>
using namespace std;
void adduser(string name, string password);
bool signin(string name, string password);
void viewuser();
void storename(string name, string password);
bool isvalid(string name);
int printchoice();
void loaddatafromefile();
string usernames[100];
string passwords[100];
int usercount = 0;

main()

{
    loaddatafromefile();
    string name, password;
    int option = 3;
    while (option != 0)
    {
        option = printchoice();
        if (option == 1)
        {
            bool desion;
            cout << "enter user name";
            cin >> name;
            cout << "enter password ";
            cin >> password;
            desion = isvalid(name);
            if (desion == true)
            {
                adduser(name, password);
                storename(name, password);
                cout << "user created"<<endl;
            }
            else
            {
                cout << "invalid"<<endl;
            }
        }

        else if (option == 2)
        {
            bool desion;
            cout << "enter user name :";
            cin >> name;
            cout << "enter password :";
            cin >> password;
            desion = signin(name, password);
            if (desion == true)
            {
                cout << " yes sign in"<<endl;
            }
            else
            {
                cout << "invalid"<<endl;;
            }
        }
        else if (option == 3)
        {
            viewuser();
        }
        else
        {
            cout << "invalid choice "<<endl;
        }
    }
}

void adduser(string name, string password)
{
    usernames[usercount] = name;
    passwords[usercount] = password;
    usercount++;
}
void storename(string name, string password)
{
    fstream file;
    file.open("user.txt", ios::app);
    file << name << endl;
    file << password << endl;
    file.close();
}
void viewuser()
{
    for (int idx = 0; idx < usercount; idx++)
    {
        cout << usernames[idx] << "\t";
    }
}
bool signin(string name, string password)
{
    bool flage = false;
    for (int idx = 0; idx < usercount; idx++)
    {
        if (usernames[idx] == name && passwords[idx] == password)
        {
            flage = true;
            break;
        }
        return flage;
    }
}
bool isvalid(string name)
{
    bool flage = true;
    for (int idx = 0; idx < usercount; idx)
    {
        if (usernames[idx] == name)
        {
            flage = false;
            break;
        }
        return flage;
    }
}
int printchoice()
{
    int choice;
    cout << "1 sign up :" << endl;
    cout << "2 sign in :" << endl;
    cout << "3 view user :" << endl;
    cout << "0 exit :" << endl;
    cout << "enter choice:" << endl;
    cin >> choice;
    return choice;
}
void loaddatafromefile()
{
    string name, password;
    fstream file;
    file.open("user.txt", ios::in);
    while (getline(file, name) && getline(file, password))
    {
        usernames[usercount] = name;
        passwords[usercount] = password;
        usercount++;
    }
}
