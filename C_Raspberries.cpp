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
void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    int ans = INT_MAX;
    int even = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];

        if (arr[i] % 2 == 0)
        {
            even++;
        }

        if (k == 5 or k == 3 or k == 4)
        {

            int m = arr[i] % k;
            if (m == 0)
                ans = 0;
            ans = min(ans, k - m);
        }
    }
    if (k == 2)
    {
        if (even > 0)
            print(0);
        else
            print(1);
        return;
    }
    else if (k == 4)
    {
        if (even > 1)
            print(0);
        else
            print(min(ans, 2-even));
        return;
    }
    cout << ans << endl;
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
