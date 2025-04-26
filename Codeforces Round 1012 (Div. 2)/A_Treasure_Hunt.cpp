#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"

void solve()
{
    int x, y, a;
    cin >> x >> y >> a;
    a = (a+1) % (x + y);
    
    int i=0;
    while(a>0){
        if(i%2==0){
            a-=x;
        }
        else{
            a-=y;
        }
        i++;
    }

    cout << (( i % 2 == 0) ? "YES" : "NO") << endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}
