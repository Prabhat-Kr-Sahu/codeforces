#include <bits/stdc++.h>
using namespace std;
#define int long long
#define INF (int)1e18

mt19937_64 RNG(chrono::steady_clock::now().time_since_epoch().count());

void solve()
{
    int n;
    cin >> n;
    int max_c = 0;
    string a;
    cin >> a;
    int c = 1;
    for (int i = 0; i < n; i++)
    {
        if (i != 0)
        {
            if (a[i] == a[i - 1])
            {
                c++;
                if (max_c < c)
                {
                    max_c = c;
                }
            }
            else
            {
                c = 1;
            }
        }
    }
    if(max_c==0){
        cout<<2<<endl;
    }
    else{
        cout<<max_c+1<<endl;
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
        // cout << "Case #" << i << ": ";
        solve();
    }
    auto end = std::chrono::high_resolution_clock::now();
    auto elapsed = std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin);
    cerr << "Time measured: " << elapsed.count() * 1e-9 << " seconds.\n";
    return 0;
}