#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define pb(n) push_back(n)
#define rep(i, n) for (int i = 0; i < n; i++)
#define rep1(i, n) for (int i = 1; i <= n; i++)
typedef long long ll;
#define int long long
#define pi (3.141592653589)
#define mod 1000000007
#define float double
#define mp make_pair
#define ff first
#define ss second
#define all(c) c.begin(), c.end()
#define min3(a, b, c) min(c, min(a, b))
#define min4(a, b, c, d) min(d, min(c, min(a, b)))
#define rrep(i, n) for (int i = n - 1; i >= 0; i--)
#define print(k) cout << k << endl
#define debug(k) cout << "debug " << k << endl
#define print2 (k, l) cout << k << " " << l << endl
#define print3 (k, l, m) cout << k << " " << l << " " << m << endl

// for sorting the indices of the array based on the values of the array--

// vector<int> ord(n);
// iota(ord.begin(), ord.end(), 0);
// stable_sort(ord.begin(), ord.end(), [&](int a, int b){ return arr[a] > arr[b]; });
long long binExponentiate(long long base, long long exp)
{
    long long result = 1; // Start with the result as 1
    while (exp > 0)
    {
        if (exp % 2 == 1)
        {                   // If the exponent is odd
            result *= base; // Multiply the result by base
        }
        base *= base; // Square the base
        exp /= 2;     // Divide the exponent by 2
    }
    return result;
}

long long factorial(int n)
{
    if (n == 0)
        return 1;
    return n * factorial(n - 1);
}
void solve()
{
    int n, m1, m2;
    cin >> n >> m1 >> m2;
    vector<pair<int, int>> v1(m1), v2(m2);
    

    for (int i = 0; i < m1; i++)
    {
        cin >> v1[i].ff >> v1[i].ss;
    }
    rep(i, m2)
    {
        cin >> v2[i].ff >> v2[i].ss;
    }

    if(m2==0){
        cout << m1 << endl;
        return;
    }
    if(m1==0){
        cout << m2 << endl;
        return;
    }

    
    int ans = 0;
    int unreq = 0;
    for (pair<int,int> i: v2)
    {   
        int x = i.ff;
        int y = i.ss;
        for (pair<int,int> j : v1)
        {   
            int a = j.ff;
            int b = j.ss;
            if (x == a && y == b)
            {
                m2--;
            }
            else if (x != a || y != b)
            {
                unreq++;
            }
        }
    }

    ans= unreq+ m2;
    cout << ans << endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    // cout.tie(0);
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
