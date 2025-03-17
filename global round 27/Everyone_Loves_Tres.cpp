#include <bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back
#define all(c) c.begin(), c.end()
#define rep(i, n) for (int i = 0; i < n; i++)
#define print(k) cout << k << endl

void solve()
{
    int n;
    cin >> n;
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    vector<int> v(500, -1);
    vector<int> values(500, 0);
    values[1] = 66;
    v[1]=66;
    for (int i = 2; i < 500; i++)
    {   
        
        values[i] =values[i - 1] + (5 * pow(10, i - 1)) * 66;
        
        v[to_string(values[i]).size()]=values[i];
    }
    for (int i = 0; i < 500; i++)
    {
        cout << values[i] << endl;
    }

    // int t;
    // cin >> t; // Read number of test cases
    // while (t--)
    // {
    //     int n;
    //     cin >> n;
    //     // print(v[n - 1]); // Process each test case
    // }

    return 0;
}
