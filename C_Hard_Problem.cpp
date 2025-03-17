#include <bits/stdc++.h>
using namespace std;
// #define int long long
#define INF (int)1e18
#define print(x) cout<<x<<endl
mt19937_64 RNG(chrono::steady_clock::now().time_since_epoch().count());

void Solve()
{
    int m, a, b,c; cin>>m>>a>>b>>c;
    int ans=0;
    if(a<=m) ans+=a;
    else{
        ans+=m;
    }
    if(b<=m) ans+=b;
    else{
        ans+=m;}
    int vacant = 2*m -ans;
    if(c<=vacant) ans+=c;
    else{
        ans+=vacant;
    }
    cout<<ans<<endl;
}
int pow(int a, int b)
{
    int res = 1;
    for (int i = 0; i < b; i++)
    {
        res *= a;
    }
    return res;
}
int32_t main()
{
    auto begin = std::chrono::high_resolution_clock::now();
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;

    cin >> t;
    
    for (int i = 1; i <= t; i++)
    {
        Solve();
    }

    auto end = std::chrono::high_resolution_clock::now();
    auto elapsed = std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin);
    // cerr << "Time measured: " << elapsed.count() * 1e-9 << " seconds.\n";

    return 0;
}
