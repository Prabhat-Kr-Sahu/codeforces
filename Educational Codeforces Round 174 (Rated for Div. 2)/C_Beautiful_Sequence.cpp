#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define pb(n) push_back(n)
#define rep(i, n) for (int i = 0; i < n; i++)
#define rep1(i, n) for (int i = 1; i <= n; i++)
typedef long long ll;
#define int long long
#define pi (3.141592653589)
#define mod 998244353  // Macro for modulus
#define float double
#define mp make_pair
#define ff first
#define ss second
#define all(c) c.begin(), c.end()
#define min3(a, b, c) min(c, min(a, b))
#define min4(a, b, c, d) min(d, min(c, min(a, b)))
#define rrep(i, n) for (int i = n - 1; i >= 0; i--)
#define print(k) cout << k << endl
#define debug(k) cout << "debug " << k << endl
#define print2(k, l) cout << k << " " << l << endl
#define print3(k, l, m) cout << k << " " << l << " " << m << endl

// Function to perform binary exponentiation
long long binExponentiate(long long base, long long exp, long long mod_val) {
    long long result = 1;
    while (exp > 0) {
        if (exp % 2 == 1) result = (result * base) % mod_val;
        base = (base * base) % mod_val;
        exp /= 2;
    }
    return result;
}

void solve() {
    int n;
    cin >> n;
    vector<int> v(n);
    map<int, vector<int>> mp;

  
    rep(i, n) {
        cin >> v[i];
        mp[v[i]].pb(i);
    }

    int ans = 0;

    for (int i = 0; i < mp[1].size(); i++) {
        int pos1 = mp[1][i];

        auto it3 = upper_bound(mp[3].begin(), mp[3].end(), pos1);
        if (it3 == mp[3].end()) continue;  
        
        auto it2_start = upper_bound(mp[2].begin(), mp[2].end(), pos1);

        for (; it3 != mp[3].end(); it3++) {
            int pos3 = *it3;

           
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
    // cout.tie(0);
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
