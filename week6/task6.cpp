#include <iostream>
using namespace std;
float lowestprice(int distance, string time);
main()
{
  string time;
  int distance;
  float price;
  cout << "enter time for travel :";
  cin >> time;
  cout << "enter distance in kilometers :";
  cin >> distance;
  price = lowestprice(distance, time);
  cout << price;
}
float lowestprice(int distance, string time)
{
  float result;
  if (distance < 20)
  {
    if (time == "day")
    {
      result = o .70 + (distance * .79);
    }
    if (time == "night")
    {
      result = result = o .70 + (distance * .90);
    }
  }
  if (distance >= 20 && distance < 100)
  {
    result = distance * 0.09;
  }
  if (distance >= 100)
  {
    result = distance * 0.06;
  }
  return result;
}