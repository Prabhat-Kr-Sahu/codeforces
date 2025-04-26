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
    vector<int> v(n);
    map<int, int> mp;

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        mp[v[i]] = i;
    }

    vector<int> v_sorted = v;
    sort(v_sorted.begin(), v_sorted.end());
    if (k == 1)
    {
        int ans = max(v[0], v[n - 1]);
        if(v[0] == ans){
            ans+= *max_element(v.begin()+1,v.end());
        }
        else{
            ans+= *max_element(v.begin(),v.end()-1);
        }
        cout<<ans<<endl;
        return;
    }

    int ans = 0;
    int l = n, r = -1;

    for (int i = 0; i < k; i++)
    {
        ans += v_sorted[n - i - 1];
        int idx = mp[v_sorted[n - i - 1]];
        l = min(l, idx);
        r = max(r, idx);
    }

    int ele = v_sorted[n - k - 1];
    // int it = find(v.begin(), v.end(), ele) - v.begin();
    // int it1 = find(v.begin() + l, v.begin() + r, ele) - v.begin();

    // if (it1 == r)
    // {
    //     ans += max(v[0], v[n - 1]);
    // }
    // else
    // {
    //     ans += ele;
    // }
    ans+=ele;
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