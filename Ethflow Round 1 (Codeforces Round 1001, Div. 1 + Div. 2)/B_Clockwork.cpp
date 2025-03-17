#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    bool flag= true;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        int l= 2*i;
        int r= 2*(n-1-i);
        int t = max(l,r);
       
        if (v[i] <= t)
        {
            flag= false;
        }
    }
    if (flag)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
