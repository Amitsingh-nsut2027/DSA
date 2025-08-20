#include<iostream>
using namespace std;
    void printodd(int arr[], int size, int index){
        if (index == size)
        {
            return;
        }
        if (arr[index]%2 == 1)
        {
            cout<<arr[index]<<" ";
        }
        index++;
        printodd(arr,size,index);
        
        
    }



    void printeven(int arr[], int size, int index){

    if (index >= size)
    {
        return;
    }
    if (arr[index]%2 == 0)
    {
        cout<<arr[index]<<" ";
    }
    index++;
    printeven(arr,size,index);
    
  }

    
  int main(){
    int arr[] = {2,4,5,6,7,3,8,9,10};
    int n = 9;
    int index = 0;

    // printodd(arr,n,index);
    printeven(arr,n,index);


}