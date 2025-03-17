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
        string s;
        cin >> s;
        int l = s.size();
        bool flag = true;
        if (l >= 2)
        {

            if (s[0] == '1' and s[1] == '0' and s[2] != '0')
            {
                if (s[2] == '1' and l == 3)
                {
                    flag = false;
                }
            }
        }
        else
        {
            flag = false;
        }

        cout << ((flag == true) ? "YES" : "NO") << endl;
    }
}