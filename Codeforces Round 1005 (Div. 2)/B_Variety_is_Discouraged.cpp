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

void solve()
{
    int n;
    cin >> n;
    vector<int> b(n);
    unordered_map<int, int> f;

    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
        f[b[i]]++;
    }
    if (n == 1)
    {
        cout << 1 << " " << 1 << endl;
        return;
    }

    int l = -1;
    int r = -1;
    int curr = 1;
    int maxi = 0;
    int fl = -1;
    int rl = -1;
    int cnt1 = 0;
    int it1 = -1;
    for (int i = 0; i < n; i++)
    {
        if (f[b[i]] == 1)
        {
            cnt1++;
            it1 = i;
        }
        if (f[b[i]] == 1 && l == -1)
        {
            l = i;
            r = i;
        }
        else if (f[b[i]] == 1 && l != -1)
        {
            r = i;
            curr++;
        }
        else
        {

            maxi = max(maxi, curr);

            if (maxi == curr)
            {
                fl = l;
                rl = r;
            }
            curr = 1;
            r = -1;
            l = -1;
        }
    }
    

    maxi = max(maxi, curr);
    if (maxi == curr)
    {
        fl = l;
        rl = r;
    }

    if(maxi==1 && cnt1>=1){
        cout<<it1+1<<" "<<it1+1<<endl;
        return;
    }
    if (fl == -1 && rl == -1)
    {
        cout << 0 << endl;
        return;
    }

    if (fl != -1 && rl == -1)
    {
        cout << fl + 1 << " " << n << endl;
        return;
    }

    cout << fl + 1 << " " << rl + 1 << endl;
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
