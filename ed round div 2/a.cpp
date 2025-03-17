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
// #define pb push_back
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
    int ax, ay, bx, by, cx, cy, dx, dy = 0;
    int x, y, k;
    cin >> x >> y >> k;
    if (x >= y)
    {
        ay = y;
        cy = y;
        ax = 0;
        cx = x;
        bx = y;
        by = 0;
        dx = x - y;
        dy = 0;
    }
    else
    {
        ax = x;
        cx = x;
        ay = 0;
        cy = y;
        bx = 0;
        by = x;
        dx = 0;
        dy = y - x;
    }
    cout << ax << " " << ay << " " << bx << " " << by << endl;
    cout << cx << " " << cy << " " << dx << " " << dy << endl;
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
