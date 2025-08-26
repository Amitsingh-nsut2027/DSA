#include <iostream>
using namespace std;

void missing(int *arr, int n)
{
    // for (int i = 0; i < n; i++)
    // {
    //     int index = abs(arr[i]);

    //     if (arr[index -1] > 0)
    //     {
    //         arr[index -1 ] *= -1;
    //     }

    // }

    // // for (int i = 0; i < n; i++)
    // // {
    // //     cout<<arr[i]<<" ";
    // // }

    // for (int i = 0; i < n; i++)
    // {
    //     if (arr[i] >0)
    //     {
    //         cout<<arr[i]<<" "<<"index = " << i <<endl;
    //     }

    // }
    int i = 0;
    while (i < n)
    {
        int index = arr[i] - 1;
        // cout<<index<<endl;
        if (arr[i] != arr[index])
        {
            swap(arr[i], arr[index]);
        }
        else
            i++;
    }
    // for (int i = 0; i < n; i++)
    // {
    //     cout<<arr[i]<<" ";
    // }

  
    while (i < n)
    {
        if (arr[i] != i)
        {
            cout << arr[i] << " Duplicate no" << endl;
        }
        else
            i++;
    }
}

int main()
{
    int arr[] = {1, 3, 5, 3, 4};
    int n;
    n = sizeof(arr) / sizeof(int);
    missing(arr, n);
    return 0;
}