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
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        int k = b - a;
        int l = d - c - k;
        if (l < 0 or d-b < 0)
        {
            cout << -1 << endl;
        }
        else
        {
            if (a == c and b == d)
            {
                cout << 0 << endl;
            }
            else
            {
                int s = abs(d - b);
                if (c >= a)
                {
                    s += a + abs(b - d) - c;
                }

                else
                {
                    s += abs(b - d) + abs(a - c);
                }

                cout << s << endl;
            }
        }
    }
}