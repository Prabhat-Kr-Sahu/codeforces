#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
// #define int long long
void solve()
{
    int n, l, r;
    cin >> n >> l >> r;

    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    vector<int> range(v.begin() + l - 1, v.begin() + r);
    vector<int> left(v.begin(), v.begin() + l - 1);
    vector<int> right(v.begin() + r, v.end());
    sort(range.begin(), range.end());
    sort(left.begin(), left.end());
    sort(right.begin(), right.end());
    int l_it = 0, r_it = 0, range_it = -1;
    int l_sum = 0, r_sum = 0;
    int ans = 0;
    for (int i = 0; i < range.size(); i++)
    {

        if (range[i] > left[l_it])
        {
            if (l_it + 1 < left.size())
            {
                l_it++;
                l_sum += left[l_it - 1];
            }
        }
        if (range[i] > right[r_it])
        {
            if (r_it + 1 < right.size())
            {
                r_it++;
                r_sum += right[r_it - 1];
            }
        }
        if (range[i] > left[l_it] || range[i] > right[r_it] || range_it == -1)
        {
            range_it = i;
        }
    }
    for (int i = 0; i < range_it; i++)
    {
        ans += range[i];
    }
    ans += min(l_sum, r_sum);
    cout << ans << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}