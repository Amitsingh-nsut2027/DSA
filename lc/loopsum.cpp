#include<iostream>
using namespace std;
int main(){
 int sum = 0;
 int arr[37]={
        753, 75, 1103, 611, 1035, 147, 84, 854, 360, 88,
        1016, 1296, 1120, 682, 494, 1284, 602, 27, 873, 18,
        1066, 1207, 680, 645, 409, 1120, 1043, 868, 1111, 819,
        1017, 178, 1077, 350, 664, 972, 16,
    };

 for(int i = 0;i<=36;i++){
     sum+=arr[i];
 };
cout<<sum;
    
    return 0;
}
// #include <iostream>
// using namespace std;

// int main() {
//     int arr[] = {
//         753, 75, 1103, 611, 1035, 147, 84, 854, 360, 88,
//         1016, 1296, 1120, 682, 494, 1284, 602, 27, 873, 18,
//         1066, 1207, 680, 645, 409, 1120, 1043, 868, 1111, 819,
//         1017, 178, 1077, 350, 664, 972, 16
//     };

//     int n = sizeof(arr) / sizeof(arr[0]);
//     int sum = 0;

//     for (int i = 0; i < n; ++i)
//         sum += arr[i];

//     cout << "Sum = " << sum << endl;

//     return 0;
// }
