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
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    sort(arr.begin(), arr.end());
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[n-1-i];
        // print(sum);
        // print(arr[n-1-i]);
        if (sum == k)
        {
            print(0);
            return;
        }
        if(sum>k){
            // print(sum);
            sum-=arr[n-i-1];
            // print(sum);
            // print(arr[i]);
            print(k-sum);
            return;
        }
    }
    if(sum<k){
        print(k-sum);
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
