#include<iostream>
using namespace std;

int addition(int a, int b){
    int sum = a+b;

    return sum;
}

int main(){
    int a,b;
    cout<<"Enter two numbers you want to add"<< endl;
    cin>>a;
    cin>>b;
    int sum = addition(a,b);
    cout<<"this is sum"<<sum;
    cout<<sum;
}
