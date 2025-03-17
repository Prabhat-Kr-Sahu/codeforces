#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

#define int long long
#define print(a) cout << a << endl
#define print2(a, b) cout << a << b << endl

void solve()
{
    string s;
    cin >> s;

    if(s[0]!=s[s.size()-1]){
        s[0]=s[s.size()-1];
    }
    print(s);
}

int32_t main()
{

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}