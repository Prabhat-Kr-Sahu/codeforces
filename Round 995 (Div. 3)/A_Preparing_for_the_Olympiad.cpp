#include <bits/stdc++.h>
using namespace std;
#define int long long
void solve()
{
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    int m=0;
    int s=0;
    int d=m-s;
    
    for (int i = 0; i < n-1;i++)
    {
        if(m+a[i] - s- b[i+1]> d )
        {
            m+=a[i];
            s+=b[i+1];
            d=m-s;
        }
    }
    d+=a[n-1];
    cout << d<< endl;
    
}
int32_t main()
{   ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}