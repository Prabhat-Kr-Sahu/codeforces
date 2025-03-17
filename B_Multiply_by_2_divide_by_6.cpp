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
    int n;
    cin >> n;
    int mul = 0;
    int ans=0;
    while (n != 1)
    {
        if (n % 6 == 0)
        {
            n /= 6;
            mul = 0;
            
        }
        else
        {
            if (mul == 0)
            {
                n *= 2;
                mul++;
            }
            else{
                print(-1);
                return;
            }
        }
        ans++;
    }
    print(ans);
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