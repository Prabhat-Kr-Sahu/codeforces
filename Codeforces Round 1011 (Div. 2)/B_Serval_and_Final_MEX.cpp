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
    int n;
    cin >> n;
    vector<int> v(n);
    int cnt = 0;
    bool l = false;
    bool r = false;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        if (v[i] == 0)
        {
            cnt++;
        }
    }
    if (v[0] == 0)
    {
        l = true;
    }
    if (v[n - 1] == 0)
    {
        r = true;
    }

    if (cnt == 0)
    {
        //cout << "cnt == 0" << endl;
        cout << 1 << endl;
        cout << 1 << " " << n << endl;
    }
    else if (cnt == n)
    {
        //cout << "cnt == n" << endl;
        cout << 3 << endl;
        cout << 1 << " " << n - 2 << endl;
        cout << 2 << " " << 3 << endl;
        cout << 1 << " " << 2 << endl;
    }
    else
    {
        if (l && r)
        {
            //cout << "l && r" << endl;
            cout << 3 << endl;
            cout << 1 << " " << n - 2 << endl;
            cout << 2 << " " << 3 << endl;
            cout << 1 << " " << 2 << endl;
        }
        else if (l || r)
        {
            //cout << "l || r" << endl;
            cout << 2 << endl;
            if (r)
            {
                cout << 2 << " " << n << endl;
            }
            else
            {
                cout << 1<< " " << n-1<< endl;
            }
            cout << 1 << " " << 2 << endl;
        }
        else
        {
            //cout << "else 0 in mid " << endl;
            cout << 2 << endl;
            cout << 1 << " " << n - 1 << endl;
            cout << 1 << " " << 2 << endl;
        }
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
