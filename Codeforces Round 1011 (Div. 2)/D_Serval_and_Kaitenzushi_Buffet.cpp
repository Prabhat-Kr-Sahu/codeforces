#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"

void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> d(n);
    for (int i = 0; i < n; i++) 
        cin >> d[i];

    vector<int> dp(k + 1, -1e18);
    dp[0] = 0; // Base case: No sushi taken initially

    for (int i = 0; i < n; i++) {  
        vector<int> new_dp = dp; // Create a copy to update simultaneously

        for (int r = n; r >= 0; r--) {  
            // Case 1: Eat one sushi piece
            if (r > 0)
                new_dp[r - 1] = max(new_dp[r - 1], dp[r]);

            // Case 2: Take this plate (only if r + k is feasible)
            if (r + k <= n)
                new_dp[r + k] = max(new_dp[r + k], dp[r] + d[i]);
        }

        dp = new_dp; // Move to next minute
    }

    cout << dp[0] << endl; // Maximum deliciousness with no leftover sushi
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
