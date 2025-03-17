#include <bits/stdc++.h>
using namespace std;
#define int long long
#define pi (3.141592653589)
#define mod 1000000007
#define mp make_pair
#define ff first
#define ss second
#define all(c) c.begin(), c.end()
#define min3(a, b, c) min(c, min(a, b))
#define min4(a, b, c, d) min(d, min(c, min(a, b)))
#define rrep(i, n) for (int i = n - 1; i >= 0; i--)
#define rep(i, n) for (int i = 0; i < n; i++)
#define array_input(n, arr)     \
    for (int i = 0; i < n; i++) \
    cin >> arr[i]
#define array_output(n, arr)    \
    for (int i = 0; i < n; i++) \
    cout << arr[i] << endl
#define print_vec(vec)        \
    for (auto &value : vec)   \
        cout << value << " "; \
    cout << endl;
#define print(k) cout << k << endl

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    int same_max = 0;
    int different_total = 0;
    unordered_map<int, int> cnt;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        cnt[v[i]]++;
        if (cnt[v[i]] > same_max)
        {
            same_max = cnt[v[i]];
        }
    }

    different_total = n - same_max;
    if (n == 1 or same_max == n)
    {
        print(0);
        return;
    }

    int ans = 1;
    while (same_max != n)
    {
        if (different_total - same_max >= 0)
        {
            ans += same_max;
            different_total -= same_max;
            same_max += same_max;
        }
        else
        {
            ans += different_total;
            same_max =n;
            different_total = 0;
        }
        if (different_total> 0)
        {
            ans++;
        }
    }

    print(ans);
}
int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}