#include <iostream>
using namespace std;
float passingtoarray(int arr[], int size);
main()
{
    int size = 3;
    int number[size] = {1, 2, 3};
    float avg = passingtoarray(number, size);
    cout << avg;
}
float passingtoarray(int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum = sum + arr[i];
    }
    float result=sum/size;
    return result;
}