#include<iostream>
using namespace std;

int power(int n , int x){
    if(n == 0) return 1;

    int rec = power(n-1,x);
    int ans = x*rec;
    return ans;
}

int main(){
    cout<<"Enter the number = ";
    int n ;
    cin>>n;
    int x;
    cout<<"Enter the number you want power of = ";
    cin>>x;
    cout<<"The power is = "<<power(n,x)<<endl;
}