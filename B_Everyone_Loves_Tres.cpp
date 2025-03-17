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

void Solve(vector<string> dp)
{
    int n;
    cin >> n;
    print(dp[n]);
    
}

int32_t main()
{
    auto begin = std::chrono::high_resolution_clock::now();
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;

    cin >> t;
    vector<string> dp(500+1, "");
   
    dp[1]="-1";
    dp[2]="66", dp[3]="-1",dp[4]= "3366", dp[5]="36366" ;
    
    for(int i=6; i<501; i++){
        dp[i]="33"+ dp[i-2];
    }
    for (int i = 1; i <= t; i++)
    {
        Solve(dp);
    }

    auto end = std::chrono::high_resolution_clock::now();
    auto elapsed = std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin);
    // cerr << "Time measured: " << elapsed.count() * 1e-9 << " seconds.\n";

    return 0;
}
