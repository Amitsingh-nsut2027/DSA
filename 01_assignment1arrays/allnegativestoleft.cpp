#include<iostream>
using namespace std;
 

int main(){
    int arr[] = {8,7,-1,-2,-4,5,6,7};
    int n = 8;
    int l = 0;
    int h = n-1;

    while (l<=h)
    {
        if (arr[l] <0)
        {
            
            l++;
        }
        else if(arr[h] > 0)
        {
            h--;
        }
        else
        {
            swap(arr[l],arr[h]);
        }
        
        
        
    }

    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    
    
}