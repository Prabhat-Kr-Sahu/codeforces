#include <iostream>
// #include <cmath>
// using namespace std;

// int min_diff(int b, int *arr, int n) {
//     int min_diff = abs(arr[0] - b);
//     int ele = arr[0];
//     for (int i = 1; i < n; i++) {
//         if (abs(arr[i] - b) == 0) {
//             ele = arr[i];
//             break;
//         } else if (abs(arr[i] - b) < min_diff) {
//             min_diff = abs(arr[i] - b);
//             ele = arr[i];
//         }
//     }
//     return ele;
// }

// int main() {
//     int t;
//     cin >> t;

//     while (t--) {
//         int n;
//         cin >> n;
//         int a[n + 1];
//         int b[n + 1];

//         for (int i = 0; i < n; i++) {
//             cin >> a[i];
//         }

//         for (int i = 0; i < n + 1; i++) {
//             cin >> b[i];
//         }

//         a[n] = min_diff(b[n], a, n);
        
//         int op = 1;

//         for (int i = 0; i < n + 1; i++) {
//            if (a[i] != b[i]) {
//                 op = op + abs(a[i] - b[i]);

//                 while (a[i] != b[i]) {
//                     int k = (b[i] - a[i]);
//                     if (k > 0) {
//                         a[i] = a[i] + 1;
//                         if (abs(b[n] - a[n]) > abs(b[n] - a[i])) {
//                             a[n] = a[i];
//                         }
//                     } else {
//                         a[i] = a[i] - 1;
//                         if (abs(b[n] - a[n]) > abs(b[n] - a[i])) {
//                             a[n] = a[i];
//                         }
//                     }
                    
//                 }
//             }
//         }


//         cout << op << endl;                 
//     }
//     return 0;
// }

