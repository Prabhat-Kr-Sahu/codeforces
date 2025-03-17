#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define int long long
void solve() {
    int n, l, r;
    cin >> n >> l >> r;

    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

   
  
    vector<int> left(v.begin(), v.begin() + r);
    vector<int> right(v.begin() + l-1, v.end());

   
    sort(left.begin(), left.end());
    sort(right.begin(), right.end());

    int l_s=0;
    int r_s=0;
    for(int i = 0; i < r-l+1; i++) {
        l_s += left[i];
        r_s += right[i];
    }
    cout<<min(l_s, r_s)<<endl;
}


int32_t main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}