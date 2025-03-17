#include <bits/stdc++.h>
#include <algorithm>
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
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        sort(arr, arr + n);
        int a = 0;
        int b = 0;
        for (int i = 0; i < n; i = i + 2)
        {
            int diff = arr[n - i- 1 ] - arr[n - i - 2];

            if (diff <= k)
            {
                arr[n - i - 2] += diff;

                k = k - diff;
                if (k == 0)
                {
                    break;
                }
            }
            else
            {
                arr[n - i - 2] += k;

                break;
            }
        }

       for (int i = 0; i < n; i++)
        {
            if (i % 2 == 0)
                a += arr[i];
            else
                b += arr[i];
        }

        cout << abs(a - b) << endl;
    }
}