#include <bits/stdc++.h>
using namespace std;
#define int long long
#define INF (int)1e18
#define print(x) cout << x << endl
#define print2(x, y) cout << x << " " << y << endl

void solve()
{
    int a, b, c;
    cin >> a >> b >> c;
    int na = 2 * b - c;
    // if(a==1 and b==1 and c%2==0 and c/2>1){
    //      print("YES");
    //      return;
    // }
   
    if (na % a == 0 && na >= a && na != 0)
    {
        print("YES");
        return;
    }

    int nb = a + (c - a) / 2;
    if (nb % b == 0 && (c-a)%2==0 && nb>=b && nb != 0)
    {
        print("YES");
        return;
    }
    int nc = a + 2*(b - a);
    if (nc % c == 0 && nc >= c && nc != 0)
    {
        print("YES");
        return;
    }

    print("NO");
    return;
}
int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}