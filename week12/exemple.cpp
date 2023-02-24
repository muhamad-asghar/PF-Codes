#include <fstream>
#include <iostream>
using namespace std;
main()
{
    string word;
    int counter = 0;
    fstream file;
    file.open("sign-in-up", ios::in);
    while (!file.eof())
    {
        getline(file, word);
        counter++;
    }
    cout << "total lines are" << counter;
    file.close();
}