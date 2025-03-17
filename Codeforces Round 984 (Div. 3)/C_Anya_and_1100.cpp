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
{ string s;
    cin >> s;
    int q;
    cin >> q;

    // If the size of the string is less than 4, it's impossible to have "1100"
    if (s.size() < 4) {
        while (q--) {
            int j, v;
            cin >> j >> v;
            cout << "NO" << endl;
        }
        return;
    }

    vector<string> arr(s.size() - 3);
    int cnt = 0;
    // Fill the array with substrings of length 4
    for (int i = 0; i <= s.size() - 4; i++) {
        arr[i] = s.substr(i, 4);
        if (arr[i] == "1100") {
            cnt++;
        }
    }

    while (q--) {
        int i, v;
        cin >> i >> v;
        i--; // Convert to 0-based indexing

        // Update the string `s` at index `i`
        s[i] = v + '0';

        // Update the affected substrings (those around index `i`)
        for (int j = max(0LL, i - 3); j <= min((int)s.size() - 4, i); j++) {
            if (arr[j] == "1100") {
                cnt--; // Remove old count if it was "1100"
            }
        }

        // Apply the change and recheck affected substrings
        for (int j = max(0LL, i - 3); j <= min((int)s.size() - 4, i); j++) {
            arr[j] = s.substr(j, 4); // Update the substring
            if (arr[j] == "1100") {
                cnt++; // Add new count if it becomes "1100"
            }
        }

        // Output result
        cout << (cnt > 0 ? "YES" : "NO") << endl;
        
    }

    
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
