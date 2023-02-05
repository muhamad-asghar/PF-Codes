#include <iostream>
using namespace std;
main()
{
  string vowel;
  cin >> vowel;
  int n = vowel.length();
  int count = 0;
  for (int idx = 0; idx <= n; idx++)
  {
    if (vowel[idx] == 'a' || vowel[idx] == 'e' || vowel[idx] == 'i' || vowel[idx] == 'o' || vowel[idx] == 'u')
    {
      count=count+1;
    }
  }
  cout <<count;
}