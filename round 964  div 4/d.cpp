#include <bits/stdc++.h>
using namespace std;

#define loop(n)                 \
    for (int i = 0; i < n; ++i) \
    {                           \
        cin >> arr[i];          \
    }
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
        string s;
        string x;
        cin >> s;
        cin >> x;
        int j = 0;

        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '?')
            {
                if (j < x.size())
                {
                    s[i] = x[j];
                }
                else
                {
                    s[i] = 'a';
                }
                j++;
            }
            else if (s[i] == x[j])
            {

                j++;
            }
        }
        if (j >= x.size())
        {
            cout << "YES" << endl;
            cout << s << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}
