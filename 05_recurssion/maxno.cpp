#include <iostream>
#include <cmath>
using namespace std;
int max(int a, int b)
{
    if (a > b)
    {
        return a;
    }
    else
    {
        return b;
    }
}
void target(int arr[], int size, int index, int &maxi)
{
    if (index == size)
    {
        return;
    }

    maxi = max(maxi, arr[index]);
    target(arr, size, index + 1, maxi);
}
int main()
{
    int arr[] = {10, 20, 30, 40, 50, 60};
    int n = 6;
    // int search = 10;
    int index = 0;
    int maxi = -1;
    target(arr, n, index, maxi);
    cout << "Max no --> " << maxi << endl;
}