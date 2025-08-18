#include<iostream>
using namespace std;
    int getFactorial(int n){
        if(n == 0 || n == 1){
            return 1;
        }
        int recur = n* getFactorial(n-1);
        return recur;
    }

int main(){



int n = 5;
cout<<"the factorial is "<<getFactorial(n);
}