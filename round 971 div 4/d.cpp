
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define INF (int)1e18

mt19937_64 RNG(chrono::steady_clock::now().time_since_epoch().count());
pair<int, int> findMinMax(int a, int b)
{
    int minVal = (a < b) ? a : b;
    int maxVal = (a > b) ? a : b;
    return make_pair(minVal, maxVal);
}

void Solve()
{
    int n;
    cin >> n;
    vector<pair<int, int>> points(n);
    map<int, int> xCount;
    map<int, int> yCount;
    for (int i = 0; i < n; i++)
    {
        cin >> points[i].first >> points[i].second;
        yCount[points[i].second]++;
        xCount[points[i].first]++;
    }
    int s_x = 0;
    int s_y = 0;
    for (int i = 0; i < n; i++)
    {
        if (yCount[points[i].second] != 1)
        {
            s_y += yCount[points[i].second];
        }
        if (xCount[points[i].first] != 1)
        {
            s_x += xCount[points[i].first];
        }
    }
    cout << (s_x - 1) * (s_y - 1) << endl;
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