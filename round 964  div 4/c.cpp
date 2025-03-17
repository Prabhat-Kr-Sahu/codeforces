
#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n, s, m;
        cin >> n >> s >> m;
        vector<pair<int, int>> intervals(n);

        for (int i = 0; i < n; ++i)
        {
            cin >> intervals[i].first >> intervals[i].second;
        }

        bool flag = false;

        // Check the time before the first interval
        if (intervals[0].first >= s)
        {
            flag = true;
        }
        // Check the time after the last interval
        else if (m - intervals[n - 1].second >= s)
        {
            flag = true;
        }
        // Check the gaps between intervals
        else
        {
            for (int i = 1; i < n; ++i)
            {
                if (intervals[i].first - intervals[i - 1].second >= s)
                {
                    flag = true;
                    break;
                }
            }
        }

        cout << (flag ? "YES" : "NO") << endl;
    }

    return 0;
}
