#include <iostream>
#include<algorithm>
using namespace std;

// int find_min(int &a, int &b, int &c, int &n) {
//     int min = a;
//     n = 1; // Assume first number is the smallest
    
//     if (b < min) {
//         min = b;
//         n = 2;
//     }
//     if (c < min) {
//         min = c;
//         n = 3;
//     }
    
//     return min;
// }

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int a, b, c;
        int n = 3;
        cin >> a >> b >> c;
        int arr[3]={a,b,c};
        sort(arr, arr + n);
        
        for (int i = 0; i < 5; i++) {
            // int k = find_min(a, b, c, n);
            if (arr[0]<10) {
                 arr[0]= arr[0]+1;
                 sort(arr,arr+n);
                
           
        }
        
        cout << arr[0] * arr[1]* arr[2] << endl;
    }
    
    return 0;
}
