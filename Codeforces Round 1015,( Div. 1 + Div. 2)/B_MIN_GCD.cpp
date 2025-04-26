#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    int minm = *min_element(v.begin(), v.end());
    int count_minm = count(v.begin(), v.end(), minm);

    if (count_minm > 1) {
        cout << "Yes" << endl;
        return;
    }

    int g = 0;
    for (int i = 0; i < n; i++) {
        if (__gcd(v[i], minm) == minm && v[i] != minm) {
            g = __gcd(g, v[i]);
        }
    }

    if (g == minm)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}
