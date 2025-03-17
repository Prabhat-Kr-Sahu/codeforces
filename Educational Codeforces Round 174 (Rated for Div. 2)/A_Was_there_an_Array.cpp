#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define pb push_back
#define rep(i, n) for (int i = 0; i < n; i++)
#define int long long
#define mod 998244353

long long binExponentiate(long long base, long long exp, long long mod) {
    long long result = 1;
    while (exp > 0) {
        if (exp % 2 == 1) result = (result * base) % mod;
        base = (base * base) % mod;
        exp /= 2;
    }
    return result;
}

void solve() {
    int n;
    cin >> n;
    vector<int> v(n);
    map<int, vector<int>> mp;

    // Store positions of 1s, 2s, and 3s
    rep(i, n) {
        cin >> v[i];
        mp[v[i]].pb(i);
    }

    int ans = 0;

    for (int i = 0; i < mp[1].size(); i++) {
        int pos1 = mp[1][i];

        // Find first valid 3 after pos1
        auto it3 = upper_bound(mp[3].begin(), mp[3].end(), pos1);
        if (it3 == mp[3].end()) continue;  // No valid 3 found

        // Find first valid 2 after pos1
        auto it2_start = upper_bound(mp[2].begin(), mp[2].end(), pos1);

        for (; it3 != mp[3].end(); it3++) {
            int pos3 = *it3;

            // Find upper bound of valid 2s within (pos1, pos3)
            auto it2_end = lower_bound(mp[2].begin(), mp[2].end(), pos3);

            int cnt = distance(it2_start, it2_end);
            if (cnt > 0) {
                ans = (ans + binExponentiate(2, cnt, mod) - 1 + mod) % mod;
            }
        }
    }

    cout << ans << endl;
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
