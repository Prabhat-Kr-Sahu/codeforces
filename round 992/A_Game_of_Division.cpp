#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define all(c) c.begin(), c.end()
#define rep(i, n) for (int i = 0; i < n; i++)
#define print(k) cout << k << endl

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> flag(n);
    vector<int> a(n);
    rep(i, n) cin >> a[i];
    for (int i = 0; i < n; i++)
    {
        if (flag[i] == 0)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (abs(a[i] - a[j]) % k == 0 and flag[j] == 0)
                {
                    flag[j] = 1;
                    flag[i] = 1;
                }
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (flag[i] == 0)
        {
            print("YES");
            print(i+1);
            return;
        }
    }
    print("NO");
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        solve(); // Process each test case
    }

    return 0;
}
