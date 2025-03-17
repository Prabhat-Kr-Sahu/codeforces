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
        int x, y;
        cin >> x >> y;
        if ((x > 0 and y > 0) or (x < 0 and y > 0))
        {
            if (abs(y)==1)
            {
                cout << "yes" << endl;
            }
            else
            {
                cout << "no" << endl;
            }
        }
        else if ((x < 0 and y < 0) or (x > 0 and y < 0))
        {
            if (abs(y) == 1)
            {
                cout << "yes" << endl;
            }
            else if (abs(x) == abs(y) and abs(x) == 1)
            {
                cout << "yes" << endl;
            }
            else
            {
                cout << "no" << endl;
            }
        }
        else if (x == 0)
        {
            cout << "no" << endl;
        }
        else if (y == 0)
        {
            cout << "yes" << endl;
        }
    }
}