#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define pb(n) push_back(n)
#define rep(i, n) for (int i = 0; i < n; i++)
#define rep1(i, n) for (int i = 1; i <= n; i++)
typedef long long ll;
#define int long long
#define pi (3.141592653589)
#define mod 998244353
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

int rec(int l,int n, vector<int> &ps)
{
    if(l<= n) return ps[l];
    return ps[l] ^ rec(l/2,n,ps);
}


void solve()
{
    int n, l, r;
    cin >> n >> l >> r;

    vector<int> ps(n + 1, 0); // Prefix XOR, initialized to 0
    vector<int> a(n + 1);     // Use 1-based indexing

   stack<int> s;

    int k=rec(l,n .ps);
    cout<<k<<endl;

}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
