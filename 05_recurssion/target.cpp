#include<iostream>
using namespace std;

bool target(int arr[], int size, int search,int index){

    if (index == size)
    {
        return false;
    }
    
    if(arr[index] == search){
        return true;
    }
    index++;
    target(arr,size,search,index);


}


int main(){
    int arr[] = { 10,20,30,40,50,60};
    int n = 6;
    int search = 90;
    int index = 0;
    cout<<target(arr,n,search,index);

    
    return 0;
}