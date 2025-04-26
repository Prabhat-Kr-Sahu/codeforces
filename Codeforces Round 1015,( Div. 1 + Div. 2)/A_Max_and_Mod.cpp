#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"

void solve()
{
    int n;
    cin >> n;
    if (n % 2 == 0)
        cout << -1 << endl;
    else
    {
        cout << n << " ";
        int i=1;
        while (n > 1)
        {
            cout << i << " ";
            n--;
            i++;
        }
        cout << endl;
    }
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
