#include <bits/stdc++.h>
using namespace std;

#define loop(n) for(int i = 0; i < n; ++i) { cin >> arr[i]; }
#define endl '\n'

int main() {
    int t;
    cin >> t; 

    while (t--) {
        int n, k;
        cin >> n >> k;
        int arr[n];
        
       
        loop(n);
        
        bool flag = false;
       
        for (int i = 0; i < n; ++i) {
            if (arr[i] == k) {
                flag = true;
                break;
            }
        }
        
        cout << (flag ? "yes" : "no") << endl;
    }

    return 0;
}
