#include <iostream>
#include<vector>
#include <string>
#include<limits.h>

using namespace std;

void merge(int arr[], int s, int e,int mid ){
    int n1 = mid - s +1;
    int n2 = e - mid;

    int *arr1 = new int[n1];
    int *arr2 = new int[n2];

    int n3 = s;

    for(int i = 0; i <n1; i++){
        arr1[i] = arr[n3];
        n3++;
    }
    for(int j = 0; j < n2;j++){
        arr2[j] = arr[n3];
        n3++;
    }
 // merging 
    int i = 0;
    int j = 0;
    n3 = s;

    while(i < n1 && j < n2){
        if(arr1[i] < arr2[j]){
            arr[n3] = arr1[i];
            i++;
            n3++;
        }
        else{
            arr[n3] = arr2[j];
            j++;
            n3++;  
        }
    }
    while(i < n1){
    arr[n3] = arr1[i];
    i++;
    n3++;
}

while(j < n2){
    arr[n3] = arr2[j];
    
    j++;
    n3++;
}

    delete[] arr1;
    delete[] arr2;




}

void mergesort(int arr[], int s, int e){
    if(s>=e){
        return;
    }
    int mid = s+(e-s)/2;

    mergesort(arr,s,mid);
    mergesort(arr,mid+1,e);

    merge(arr,s,e,mid);

}

int main(){
    int arr[] = {7,4,5,2,6,9,3};
    int n = 7;
    int s = 0;
    int e = 6;


    mergesort(arr,s,e);

    for(int i = 0; i <=e;i++){
        cout<<arr[i]<<" ";

    }



}