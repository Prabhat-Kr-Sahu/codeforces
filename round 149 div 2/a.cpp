#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define pb(n) push_back(n)

int find_median(vector<int> &v)
{
    int size = v.size();
    sort(v.begin(), v.end());
    return v[(size - 1) / 2];
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int x, k;
        cin >> x >> k;
        if (x % k != 0)
        {
            cout << 1 << endl;
            cout<< x<< endl;
        }
        else
        {
            cout << 2 << endl;
            cout << k - 1 << ' ' << x - k + 1 << endl;
        }
    }
}