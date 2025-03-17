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
        int n;
        cin >> n;

        int arr[n];
        int c = 0;
        int flag = -1;

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] == 2)
            {
                c++;
            }
        }

        if (c % 2 == 1)
        {
            cout << -1 << endl;
        }
        else if (c == 0)
        {
            cout << 1 << endl;
        }
        else
        {
            for (int i = 0; i < n; i++)
            {
                int k = 0;
                for (int j = 0; j < i; j++)
                {
                    if (arr[j] == 2)
                    {
                        k++;
                    }
                }
                if (k * 2 == c)
                {
                    flag = i;
                    break;
                }
            }
            cout << flag << endl;
        }
    }
}
