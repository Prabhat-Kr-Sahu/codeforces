#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define pb(n) push_back(n)
#define rep(i, n) for (int i = 0; i < n; i++)
#define rep1(i, n) for (int i = 1; i <= n; i++)
typedef long long ll;
#define int long long
#define pi (3.141592653589)
#define mod 998244353
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

void solve() {
    int n; cin >> n;
    vector <int> a(n + 1);
    for (int i = 1; i <= n; i++){
        cin >> a[i];
    }
    
    if (n == 1){
        if (a[1] == 0){
            cout << 2 << '\n';
            return;
        }
        cout << 1 << '\n';
        return;
    }
    
    vector <int> dp(n + 1, 0);
    
    // dp[0] = ways such that i is a truth guy and this is valid 
    for (int i = 1; i <= n; i++){
        if (a[i] >= i) continue;
        // this is a truth guy and the first truth guy 
        if (a[i] == i - 1 && i <= 2){
            dp[i] = 1;
        }
        
        // this is not the first truth guy 
        // either i - 1 is truth guy 
        if (i >= 2 && a[i] == a[i - 1]){
            dp[i] += dp[i - 1];
        } 
        // or i - 2 is truth and i - 1  is lyijng 
        if (i >= 3 && a[i] == a[i - 2] + 1){
            dp[i] += dp[i - 2];
        }
        
        dp[i] %= mod;
    }
    
    int ans = dp[n] + dp[n - 1];
    ans %= mod;
    cout << ans << '\n';
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
