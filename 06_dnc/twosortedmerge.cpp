#include<iostream>
#include<vector>
    
using namespace std;
void merge( int arr[], int n, int brr[], int size2){
    int i = 0 , j = 0;
    vector <int> ans;
    while (i < n && j<size2)
    {
        if (arr[i] <= brr[j])
        {
            ans.push_back(arr[i]);
            i++;
        }
        else{
            ans.push_back(brr[j]);
            j++;
        }
        
    }
    while (i<n)
    {
        ans.push_back(arr[i]);
        i++;
    }
    while (j < size2)
    {
        ans.push_back(brr[j]);
        j++;
    }
    
    for (int k = 0; k < ans.size(); k++)
    {
        cout<<ans[k]<<" ";
    }
    
    
}

int main(){
    int arr[] = {10,30,70,90};
    int n = 4;
    int brr[] = {20,60,100};
    int n2 = 3;
    merge(arr,n,brr,n2);

}

