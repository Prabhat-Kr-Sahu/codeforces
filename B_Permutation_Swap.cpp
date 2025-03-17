#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
#define int long long
#define INF (int)1e18

mt19937_64 RNG(chrono::steady_clock::now().time_since_epoch().count());
void solve()
{
    int n;
    cin >> n;
    int diff = 0;
    for (int i = 0; i < n; i++)
    {
        int x; cin>>x;
        diff = __gcd(diff, abs(x-1 - i));
       
    }
    cout<<diff<<endl;
}
int32_t main()
{
    auto begin = std::chrono::high_resolution_clock::now();
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    auto end = std::chrono::high_resolution_clock::now();
    auto elapsed = std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin);
    cerr << "Time measured: " << elapsed.count() * 1e-9 << " seconds.\n";
    return 0;
}