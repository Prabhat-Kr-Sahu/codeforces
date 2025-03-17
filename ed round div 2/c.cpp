#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    // Calculate gaps between consecutive elements
    vector<int> gaps(n - 1);
    for (int i = 1; i < n; i++) {
        gaps[i - 1] = a[i] - a[i - 1];
    }

    // Find maximum gap
    int max_gap = *max_element(gaps.begin(), gaps.end());

    // Minimum k must be at least half of the maximum gap
    int min_k = (max_gap + 1) / 2; // +1 to handle odd gaps correctly

    // Check if we need to consider an additional cell
    if (a[0] > 0) {
        min_k = max(min_k, a[0]); // We can use cell `0` if it's not in `a`
    }
    
    // Output result for this test case
    cout << min_k << endl;
}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}