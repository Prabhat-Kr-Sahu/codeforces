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
        int x, y, k;
        cin >> x >> y >> k;
        int sum_x = 0;
        int sum_y = 0;
        int arr_x[k];
        int arr_y[k];
        for (int i = 0; i < k; i++)
        {

            if (i != k - 1)
            {
                cout << i + 1 << " " << i + 1 << endl;
                sum_x += i + 1;
            }
            else
            {
                if (k == 1)
                {
                    cout << k * x << " " <<  k * y << endl;
                }
                else
                {
                    cout << -1*(sum_x - k * x) << " " << -1*(sum_x - k * y) << endl;
                }
            }
        }
    }
}
