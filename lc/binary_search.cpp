#include<iostream>
using namespace std;

int binarySearch(int arr[], int size , int target){

    int s = 0;
    int e = size-1;
    int mid = s+(e-s)/2;
    cout << size<< endl;

    while (s<=e)
    {

        if (arr[mid] == target)
        {
            return mid;
        }
        
        if (arr[mid]<target)
        {
            s = mid+1;
        }
        else
        {
            e = mid-1;
        }
        mid = s+(e-s)/2;
        
    }
    return mid;
    
}


int main(){
    int arr[] = {2,4,6,8,10,22,44};
    int size = 7;
    int target = 22;
    int ans = binarySearch(arr,size,target);
    cout<<ans;
    
} // namespace std;
