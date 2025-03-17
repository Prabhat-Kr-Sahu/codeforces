#include <bits/stdc++.h>
using namespace std;
#define int long long
#define pi (3.141592653589)
#define mod 1000000007
#define float double
#define pb push_back
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
#define print(vec)            \
    for (auto &value : vec)   \
        cout << value << " "; \
    cout << endl;
#define print(k) cout << k << endl

void solve()
{
    int n, q;
    cin >> n >> q;
    int arr[n];
    vector <int> sum(n,0);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (i == 0)
            sum[i] = arr[i];
        else
        {
            sum[i] += arr[i] + sum[i - 1];
        }
    }

    for (int i = 0; i < q; i++)
    {   
        
        int l, r, k;
        cin >> l >> r >> k;

        int range_sum = sum[r - 1] - (l > 1 ? sum[l - 2] : 0);

        int s = sum[n-1] - range_sum + k * (r - l + 1);
   
        cout << (s % 2 != 0 ? "YES" : "NO") << endl;
    
    }
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
