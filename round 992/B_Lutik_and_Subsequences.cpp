#include <bits/stdc++.h>
using namespace std;
#define int long long
#define INF (int)1e18
#define print(x) cout << x << endl
typedef long long ll;

long long factorial(int n)
{
    if (n == 0 || n == 1)
        return 1;
    return n * factorial(n - 1);
}

// Function to calculate Combination C(n, r)
long long combination(int n, int r)
{
    if (r > n)
        return 0;
    return factorial(n) / (factorial(r) * factorial(n - r));
}

// Function to calculate Permutation P(n, r)
long long permutation(int n, int r)
{
    if (r > n)
        return 0;
    return factorial(n) / factorial(n - r);
}

void solve()
{
    int n;    // Declare and initialize `n` here
    cin >> n; // Read the size of the array
    int cnt1 = 0;
    int cnt0 = 0;
    vector<int> arr(n); // Now `n` is initialized properly
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] == 1) // Correct the condition (integers, not characters)
        {
            cnt1++;
        }
        else if (arr[i] == 0)
        {
            cnt0++;
        }
    }
    cout << (1ll << cnt0) * (ll)cnt1 << '\n';
}

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}