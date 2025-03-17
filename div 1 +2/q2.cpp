// #include <iostream>
// #include <set>
// #include <vector>
// #include <algorithm>

// using namespace std;

// int main() {
//     int t;
//     cin >> t;
    
//     while (t--) {
//         int n;
//         cin >> n;
//         vector<int> a(n);
        
//         for (int i = 0; i < n; i++) {
//             cin >> a[i];
//         }
        
//         set<int> v;
        
//         // Calculate differences where a[i-1] > a[i]
//         for (int i = 1; i < n; i++) {
//             if (a[i - 1] > a[i]) {
//                 v.insert(a[i - 1] - a[i]);
//             }
//         }
        
//         int coins = 0;
        
//         // Convert set to vector and sort
//         vector<int> sortedDifferences(v.begin(), v.end());
//         sort(sortedDifferences.begin(), sortedDifferences.end());
        
//         // Initialize minimum difference
//         int min = sortedDifferences[0];
        
//         while (!sortedDifferences.empty()) {
//             // Calculate coins for current minimum difference
//             coins += (sortedDifferences.size() + 1) * min;
            
           
            
//             // Update minimum difference if there are remaining elements
//             if (sortedDifferences.size()>=2) {
//                 min = sortedDifferences[1] - min;
//             }
//              // Remove the first element (smallest difference) from the vector
//             sortedDifferences.erase(sortedDifferences.begin());
            
            
//         }
        
//         cout << coins << endl;
//     }
    
//     return 0;
// }



#include <iostream>
#include <set>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        set<int> v;
        
        // Calculate differences where a[i-1] > a[i]
        for (int i = 1; i < n; i++) {
            if (a[i - 1] > a[i]) {
                v.insert(a[i - 1] - a[i]);
            }
        }
        
        int coins = 0;
        
        // Convert set to vector and sort
        vector<int> sortedDifferences(v.begin(), v.end());
        sort(sortedDifferences.begin(), sortedDifferences.end());
        
        // Initialize minimum difference
        int min = sortedDifferences[0];
        
        while (!sortedDifferences.empty()) {
            // Calculate coins for current minimum difference
            coins += (sortedDifferences.size() + 1) * min;
            
            // Remove the smallest element from the vector
            sortedDifferences.erase(sortedDifferences.begin());
            
            // Update minimum difference if there are remaining elements
            if (!sortedDifferences.empty()) {
                min = sortedDifferences[0]; // Update min to the new smallest element
            }
        }
        
        cout << coins << endl;
    }
    
    return 0;
}
