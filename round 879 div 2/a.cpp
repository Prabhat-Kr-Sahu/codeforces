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
        int n;
        cin >> n;
        int c = 0;
        int s = 0;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            s += arr[i];
            if (arr[i] < 0)
            {
                c++;
            }
        }

        if (s >= 0)
        {
            if (c % 2 == 0)
            {
                cout << 0 << endl;
            }
            else
            {
                cout << 1 << endl;
            }
        }
        else
        {
            if (s % 2 == 0)
            {
                if ((c - (s * (-1) / 2)) % 2 == 0)
                {
                    cout << s * (-1) / 2 << endl;
                }
                else
                {
                    cout << s * (-1) / 2 + 1 << endl;
                }
            }
            else
            {
                if ((c - ((s * (-1) + 1) / 2)) % 2 == 0)
                {
                    cout << ((s * (-1) + 1) / 2) << endl;
                }
                else
                {
                    cout << ((s * (-1) + 1) / 2) + 1 << endl;
                }
            }
        }
    }
}
