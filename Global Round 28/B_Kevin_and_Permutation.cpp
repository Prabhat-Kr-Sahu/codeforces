#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n,k;cin>>n>>k;
    int j=1;
    int it=1;
    int max=n;
    int min=1;
    vector<int>ans(n);
    for(int i=0;i<n;i++){
       if(i+1==k*j){
           ans[i]=min;
           j++;
           min++;
       }
       else{
           ans[i]=max;
           max--;
       }
    }
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}