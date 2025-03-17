#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define pb(n) push_back(n)

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        bool flag = true;
        map<char, int> map;
        for (int i = 0; i < n; i++)
        {
            map[s[i]]++;
        }

        int c = 0;
        for (auto k : map)
        {
            if (k.second % 2 == 1)
            {
                c++;
            }
        }
        cout << ((c > k + 1) ? "NO" : "YES") << endl;
    }
}