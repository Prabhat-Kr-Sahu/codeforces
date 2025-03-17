#include <bits/stdc++.h>
#include <cmath>
using namespace std;

#define int long long
#define print(x) cout << x << endl
const vector<int> odd_digits = {1, 3, 5, 7, 9};

// Function for modular exponentiation


void solve()
{
    int n, d;
    cin >> n >> d;
    set<int> result;

    if (n>=3) {
        result.insert(3);
        result.insert(7);
    }
    if(n>=6) {
        result.insert(9);
        
    }
    
    for (int odd : odd_digits)
    {
        if (d % odd == 0)
        {
            result.insert(odd);
        }
    }

    for (auto it = result.begin(); it != result.end(); ++it)
    {
        cout << *it << " ";
    }
    cout << endl;
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
