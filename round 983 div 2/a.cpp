#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define all(c) c.begin(), c.end()
#define rep(i, n) for (int i = 0; i < n; i++)
#define print(k) cout << k << endl

void solve()
{
    int n;
    cin >> n;
    vector<int> a(2*n);
    int cnt =0;
    int min_cnt = INT_MAX;
    for (int i = 0; i < 2*n; i++){
        cin >> a[i];
        if(a[i]==0){
            cnt++;
        }
    }
    int k=min(cnt,2*n-cnt);

    if(cnt==0 or cnt==2*n){
        cout<<0<<' '<<0<<endl;
        return;
    }

    if(cnt%2==0){
        cout<<0<<' '<<k<<endl;
        
    }
    else{
     cout<<1<<' '<<k<<endl;
    }
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        solve(); // Process each test case
    }

    return 0;
}
