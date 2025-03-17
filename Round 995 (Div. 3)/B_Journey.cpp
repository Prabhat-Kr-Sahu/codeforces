#include <bits/stdc++.h>
using namespace std;
#define int long long
void solve()
{
    int n, a, b, c;
    cin >> n >> a >> b >> c;

    int totalCycleDistance = a + b + c;

    // Calculate the number of full cycles Monocarp can walk
    int cycles = n / totalCycleDistance;
    int remainingDistance = n % totalCycleDistance;

    // Calculate the total days covered by full cycles
    int ans = cycles * 3;

    // Check the remaining distance day by day
    if (remainingDistance > 0)
    {
        ans++; // Day 1
        remainingDistance -= a;
    }
    if (remainingDistance > 0)
    {
        ans++; // Day 2
        remainingDistance -= b;
    }
    if (remainingDistance > 0)
    {
        ans++; // Day 3
        remainingDistance -= c;
    }

    cout << ans << endl;
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}