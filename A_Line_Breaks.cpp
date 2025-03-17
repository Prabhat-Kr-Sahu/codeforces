#include <bits/stdc++.h>
using namespace std;
// #define int long long
#define INF (int)1e18

mt19937_64 RNG(chrono::steady_clock::now().time_since_epoch().count());

void Solve()
{
    int n, m;
    cin >> n >> m;
    
    int ans = 0;
    int k = m;

    for (int i = 0; i < n; i++)
    {
       string s;
       cin>>s;
       if(s.size()<=m){
        m-= s.size();
        ans++;
       }
       else{
         for(int j=i+1;j<n; j++ ){
            string s;
            cin>>s;

         }
         break;
       }
    }
    cout << ans << endl;
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
