#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define pb push_back
#define mp make_pair
#define ff first
#define ss second

void solve()
{
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    if (n == 1)
    {
        cout << "NO" << endl;
        return;
    }
    int cnt = 0;
    for (int i = 0; i < n / 2; i++)
    {
        if (s[i] - '0' > s[n - i - 1] - '0')
        {
            if (k > 0)
            {
                cout << "YES" << endl;
                return;
            }

            else
            {
                cout << "NO" << endl;
                return;
            }
        }
        else if (s[i] - '0' == s[n - i - 1] - '0')
        {
            cnt++;
            continue;
        }
        else
        {
            cout << "YES" << endl;
            return;
        }
    }
    if (cnt == n / 2)
    {
        if (k > 0)
        {
            int minm = s[0] - '0';
            int maxm = s[0] - '0';
            for (int i = 1; i < n; i++)
            {
                minm = min(minm, (int)(s[i] - '0'));
                maxm = max(maxm, (int)(s[i] - '0'));
            }
            if (minm ==  maxm )
            {
                cout << "NO" << endl;
            }
            else
            {
                cout << "YES" << endl;
            }
        }
        else
            cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
    }
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
