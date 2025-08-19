#include<iostream>
using namespace std;

void printarray(int arr[], int size, int index){
        if( index == size){
            return;
        }
        cout<<arr[index]<<" ";
        index++;
        printarray(arr,size,index);
}

int main(){
    int arr[] = {10,20,30,40,50,60};
    int n = 6;
    int index = 0;
    printarray(arr,n,index);
}