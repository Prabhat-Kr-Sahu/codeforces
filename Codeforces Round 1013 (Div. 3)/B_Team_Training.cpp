#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"

void solve()
{
    int n, x;
    cin >> n >> x;
    vector<int> a(n);

    for (int i = 0; i < n; i++)
        cin >> a[i];

    sort(a.rbegin(), a.rend());
    int team_size = 0, strong_teams = 0;

    for (int i = 0; i < n; i++)
    {
        team_size++;
        if (team_size * a[i] >= x)
        {
            strong_teams++;
            team_size = 0;
        }
    }

    cout << strong_teams << endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
