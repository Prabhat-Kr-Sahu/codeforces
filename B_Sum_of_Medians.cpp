#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define int long long

#define print(x) cout << x << endl
bool pow2(int n)
{
    return (n > 0) && (n & (n - 1)) == 0;
}
const int N = 2e5 + 5;
int a[N];
void solve()
{
    ll n, k;
    cin >> k >> n;
    for (int i=1;i<=n*k;i++){
        cin >> a[i];
    }
    ll x=(k+1)/2 - 1;
    x = k - x;
    ll z=n*k+1;
    ll ans=0;
    while(n--){
        z-=x;
        if (z<=0) break;
        ans+=a[z];
    }
    cout << ans << endl;
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t = 1;
    cin >> t;
    while (t--)
        solve();
    return 0;
}