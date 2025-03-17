#include <bits/stdc++.h>
using namespace std;
// #define int long long
#define INF (int)1e18
#define print(x) cout<<x<<endl
mt19937_64 RNG(chrono::steady_clock::now().time_since_epoch().count());

void Solve(vector<int> ps)
{
    int n;
    cin >> n;
    vector<int> arr(n);
    int sum = 0;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
        // print(sum);
        for (int i = 0; i < 101; i++)
        {   
            if (ps[i] == sum)
            {
                ans++;
                break;
            }
            if (ps[i] > sum)
            {
                break;
            }
        }
    }
    cout << ans << endl;
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
    vector<int> ps(101);
    for (int i = 0; i < 100; i++)
    {
        ps[i] = pow(2 * i + 1, 2);
        // print(ps[i]);
    }
    for (int i = 1; i <= t; i++)
    {
        Solve(ps);
    }

    auto end = std::chrono::high_resolution_clock::now();
    auto elapsed = std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin);
    // cerr << "Time measured: " << elapsed.count() * 1e-9 << " seconds.\n";

    return 0;
}
