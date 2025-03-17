
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define INF (int)1e18

mt19937_64 RNG(chrono::steady_clock::now().time_since_epoch().count());



void Solve(){
    int n, m, p;
    cin >> n >> m >> p;

    vector<int> houses(p);
    for (int i = 0; i < p; i++) {
        cin >> houses[i];
    }

    vector<vector<int>> connections(m, vector<int>(3));
    for (int i = 0; i < m; i++) {
        cin >> connections[i][0] >> connections[i][1] >> connections[i][2];
        cout << connections[i][2] << " "; // Output the third element (e.g., the weight of the connection)
    }
    cout << endl;

    int a, b;
    cin >> a >> b;

    // Assuming you're trying to find a minimum of some values between a and b
    int min_val = 1000001; // High initial value
    for (int i = a; i <= b; i++) {
        // Modify this part according to your logic, this seems to just return a constant value currently
        int current_value = i - a + b - i; // This simplifies to b - a, which is constant
        if (current_value < min_val) {
            min_val = current_value;
        }
    }
    cout << min_val << endl;
}

int32_t main()
{
    auto begin = std::chrono::high_resolution_clock::now();
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    // freopen("in",  "r", stdin);
    // freopen("out", "w", stdout);

    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        // cout << "Case #" << i << ": ";
        Solve();
    }
    auto end = std::chrono::high_resolution_clock::now();
    auto elapsed = std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin);
    cerr << "Time measured: " << elapsed.count() * 1e-9 << " seconds.\n";
    return 0;
}