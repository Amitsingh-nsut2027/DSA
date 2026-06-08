#include<iostream>
using namespace std;
void printrow(int arr[][2], int rowsize, int colsize){
    for (int i = 0; i < rowsize; i++)
    {
        for (int j = 0; j < colsize; j++)
        {
            cout<<arr[i][j]<<",";
        }
        cout<<endl;
        
    }
    
}
void printcol(int arr[][2], int rowsize, int colsize){
    for (int i = 0; i < colsize; i++)
    {
        for (int j = 0; j < rowsize; j++)
        {
            cout<<arr[j][i]<<",";
        }
        cout<<endl;
        
    }
    
}

int main(){
    int arr[3][2] = {
        {3,5},
        {5,9},
        {10,12}
    };
    
    // printrow(arr,3,2);
    printcol(arr,3,2);
}