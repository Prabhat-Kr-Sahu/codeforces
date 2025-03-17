#include <bits/stdc++.h>
using namespace std;
// #define int long long
#define INF (int)1e18
#define print(x) cout << x << endl
mt19937_64 RNG(chrono::steady_clock::now().time_since_epoch().count());
int pow(int a, int b)
{
    int res = 1;
    for (int i = 0; i < b; i++)
    {
        res *= a;
    }
    return res;
}

void Solve()
{
    int n; cin>>n;
    unordered_map<int, int> mp;
    for(int i=0; i<n; i++){
        int k;cin>>k;
        mp[k]++;
    }
    int ans=0;
    int cnt1=0;
    for(int i=0;i<mp.size(); i++){
        if(mp[i]>1){
            ans++;
    }
    if(mp[i]==1){
        cnt1++;
    }
    }
    if(cnt1%2==1){
        print(ans+ (cnt1+1));
    }
    else{
        print(ans+cnt1);
    }
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
