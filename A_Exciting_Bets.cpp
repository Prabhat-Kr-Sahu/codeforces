#include <bits/stdc++.h>
using namespace std;

#define int long long

int gcd(int a, int b)
{
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return abs(a);
}
void solve()
{
    int a, b;
    cin >> a >> b;
    int max = abs(a - b);
    int cmax = gcd(a, b);
    
    bool down = true;

    if (max == 0)
    {
        cout << 0 << ' ' << 0 << endl;
        return;
    }
    int steps = min( a % max, max - a % max);
    cout << max << ' ' << steps << endl;
}

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
