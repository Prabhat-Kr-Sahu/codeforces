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
        int n;
        cin >> n;
        long long min_diff = 1000000000001;
        int it = -1;
        bool flag = true;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (i != 0)
            {
                if (arr[i - 1] <= arr[i])
                {
                    if (arr[i] - arr[i - 1] < min_diff)
                    {
                        min_diff = arr[i] - arr[i - 1];
                        it = i - 1;
                    }
                }
                else
                {
                    flag = false;
                }
            }
        }

        if (flag == false)
        {
            cout << 0 << endl;
        }
        else if (min_diff == 0)
        {
            cout << 1 << endl;
        }
        else
        {
            if (min_diff % 2 == 0)
            {
                cout << min_diff/2+1<< endl;
            }
            else
            {
                cout << (min_diff + 1) / 2 << endl;
            }
        }
    }
}
