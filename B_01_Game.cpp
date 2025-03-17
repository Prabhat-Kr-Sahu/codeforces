#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define int long long

#define print(x) cout << x << endl
bool pow2(int n)
{
    return (n > 0) && (n & (n - 1)) == 0;
}
const int N = 2e5 + 5;
int a[N];
void solve()
{
   
    string s;
    cin >> s;
    int cnt0 = 0, cnt1 = 0;
    for(auto ss:s){
        if(ss=='0')
            cnt0++;
        else
            cnt1++;
    }
    
    int minm= min(cnt0, cnt1);
  
   
    if (minm%2 == 1)
        print("DA");
    else
    {
        print("NET");
    }
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t = 1;
    cin >> t;
    while (t--)
        solve();
    return 0;
}