#include <iostream>
#include <cmath>
using namespace std;
int min(int a, int b)
{
    if (a > b)
    {
        return b;
    }
    else
    {
        return a;
    }
}
void target(int arr[], int size, int index, int &maxi)
{
    if (index == size)
    {
        return;
    }

    maxi = min(maxi, arr[index]);
    target(arr, size, index + 1, maxi);
}
int main()
{
    int arr[] = {10, 20, 3, 40, 50, 60};
    int n = 6;
    // int search = 10;
    int index = 0;
    int maxi = 1000000;
    target(arr, n, index, maxi);
    cout << "Minimum no --> " << maxi << endl;
}