#include <iostream>
#include<vector>

using namespace std;

int pivotIndex(vector<int>& nums){
    int s = 0;
    int e = nums.size()-1;
    int mid = s + (e-s)/2;
    int ansIndex = -1;
//     store and compute 
     while (s<=e)
     {
        /* code */
     
     if(nums[mid]<nums[mid+1])
    
    {
        s = mid+1;
    }

    else
    {
        ansIndex= mid;
        e = mid-1;
    }
    mid ;
}
return ansIndex;

while(s<e)
{
    if (nums[mid]<nums[mid+1])
    {
        s = mid+1;
    }
    else
    {
        e = mid;
    }
    mid;
    
}
    return mid;
    
}


// direct binary 

// int main(){
//     int nums[] = {1,4,5,6,8,5,2,1};
//     int ans = pivotIndex;
// }


