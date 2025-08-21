#include<iostream>

using namespace std;
bool check(int arr[], int size, int index){
    if (index == size-1)
    {
        return true;
    }
    if (arr[index+1]<arr[index])
    {
        return false;
    }
    index++;
    bool ans =  check(arr,size,index);
    return ans;
    
    
}

int main(){
    int arr[] = {15,20,30,35,40,45};
    int n = 6;
    int index = 0;
    cout<<check(arr,n,index)<<endl;

}