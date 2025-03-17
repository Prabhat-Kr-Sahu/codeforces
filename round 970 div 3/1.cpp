
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define INF (int)1e18

mt19937_64 RNG(chrono::steady_clock::now().time_since_epoch().count());

int gcd(int a, int b)
{
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

bool isPerfectSquare(int num)
{
    if (num < 0)
    {
        return false; // Negative numbers cannot be perfect squares
    }
    int sqrtValue = static_cast<int>(std::sqrt(num));
    return (sqrtValue * sqrtValue == num);
}

void Solve()
{
    int k, x, a;
    cin >> k >> x >> a;
    if (k < x - 1)
    {
        cout << "NO" << endl;
    }
    else if (x == 1 and a == 1)
    {
        cout << "NO" << endl;
    }
    else if(x==1){
         cout << "YES" << endl;
    }
    else if (k == x)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
    }
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