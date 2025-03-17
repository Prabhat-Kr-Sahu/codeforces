#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define pb(n) push_back(n)
#define rep(i, n) for (int i = 0; i < n; i++)
#define rep1(i, n) for (int i = 1; i <= n; i++)
typedef long long ll;
#define int long long
#define pi (3.141592653589)
#define mod 1000000007
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
#define print2 (k, l) cout << k << " " << l << endl
#define print3 (k, l, m) cout << k << " " << l << " " << m << endl

void solve() {
    int n, p;
    cin >> n >> p;
    vector<int> a(n);
    vector<int> buckets(p, 0); // Fixed-size array for bb < p

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++) {
        int bb;
        cin >> bb;
        if (bb < p) {
            buckets[bb] += a[i]; // Accumulate contributions for each bb
        }
    }

    int ans = p; // Initial base cost
    n--;         // Decrease n by 1 as one item is already paid for
    for (int bb = 0; bb < p && n > 0; bb++) {
        if (buckets[bb] > 0) { // Only process non-zero buckets
            if (buckets[bb] <= n) {
                ans += bb * buckets[bb]; // Use all contributions from this bucket
                n -= buckets[bb];
            } else {
                ans += bb * n; // Use only what's needed to satisfy n
                n = 0;
            }
        }
    }

    // If `n > 0`, remaining items incur `p` cost each
    ans += p * n;

    cout << ans << endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
