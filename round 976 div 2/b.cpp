
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define INF (int)1e18

mt19937_64 RNG(chrono::steady_clock::now().time_since_epoch().count());

void Solve()
{
    unordered_map<long long, int> bulbs;

    for (long long i = 1; i <= INF; ++i)
    {
        for (long long j = i; j <= INF; j += i)
        {
            bulbs[j] = !bulbs[j];
        }
    }

    int n;
    cin >> n;
    int k = 0;
    int i=0;
    while (k!=n){
        
            k+=bulbs[i];
        
    }
    cout<<i+1<<endl;
}

int32_t main()
{
    auto begin = std::chrono::high_resolution_clock::now();
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    // freopen("in",  "r", stdin);
    // freopen("out", "w", stdout);

    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        // cout << "Case #" << i << ": ";
        Solve();
    }
    auto end = std::chrono::high_resolution_clock::now();
    auto elapsed = std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin);
    cerr << "Time measured: " << elapsed.count() * 1e-9 << " seconds.\n";
    return 0;
}