#include <bits/stdc++.h>
#include <bitset>
using namespace std;

#define int long long

void solve()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    
    int res=arr[0];
    for (int i = 1; i < n; i++){
        res&=arr[i];
    }
    cout<<res<<endl;
   
}
int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t = 1;
    cin>>t;
    while (t--)
    {
        solve();
    }
    return 0;
}