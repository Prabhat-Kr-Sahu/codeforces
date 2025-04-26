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
    int ans = 0;

    while (n > 0)
    {
        if (n % 2 == 0)
        {
            if (k % 2 == 0)
            {
                ans += n / k;
                n = n % k;
                if (n != 0)
                {
                    ans++;
                }
            }
            else
            {
                ans += n / (k - 1);
                n = n % (k - 1);
                if (n != 0)
                {
                    ans++;
                }
            }
            break;
        }
        else
        {
            if (n > k)
            {
                n -= k;
            }
            else
            {
                n = 0;
            }
            ans++;
        }
    }

    cout << ans << endl;
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
